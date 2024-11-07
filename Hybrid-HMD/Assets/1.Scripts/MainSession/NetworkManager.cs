using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class NetworkManager : MonoBehaviourPunCallbacks
{
    private const int maxPlayerCount = 3;
    public Device device;
    public enum Device { hmd, smartphone, desktop }
    private string deviceName => device.ToString();

    void Start()
    {
        if (!PhotonNetwork.IsConnected)
        {
            PhotonNetwork.NickName = deviceName;
            PhotonNetwork.ConnectUsingSettings();
        }
    }

    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        Debug.Log("connected");
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = maxPlayerCount;
        roomOptions.IsOpen = true;
        roomOptions.IsVisible = true;

        PhotonNetwork.JoinOrCreateRoom("myRoom", roomOptions, TypedLobby.Default);
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        base.OnJoinRandomFailed(returnCode, message);
        Debug.Log($"failed to join room: error code = {returnCode}, msg = {message}");
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("joined room");
    }

    public bool CheckConnectionToPhone()
    {
        bool isConnected = false;
        Debug.Log("waiting for connection...");
        
        foreach (var player in PhotonNetwork.PlayerListOthers)
        {
            if (player.NickName == "smartphone")
            {
                Debug.Log($"connected to {player.NickName}");
                isConnected = true;
            }   
        }
        return isConnected;
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        PhotonNetwork.ReconnectAndRejoin();
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        Debug.Log($"{newPlayer.NickName} joined the room");
    }


    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        Debug.Log($"{otherPlayer.NickName} left the room");
    }

}