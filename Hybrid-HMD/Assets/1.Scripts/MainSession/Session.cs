using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct Session
{
    public string UserID { get; set; }
    public int BlockID { get; set; }
    public int ConditionID { get; set; }

    public Session(int userID, int blockID, int conditionID)
    {
        this.UserID = "p" + userID;
        this.BlockID = blockID;
        this.ConditionID = conditionID;
    }
}
