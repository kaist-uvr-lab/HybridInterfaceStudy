# Overview
This repository contains a prototype of a hybrid AR interface that integrates the HoloLens 2 with a mobile phone. It also includes a study task application developed to evaluate the interface.

The repository is divided into three separate Unity projects:
* **Hybrid-Desktop**: 2 desktop applications
  * Experiment App - guides & monitors participants during the study
  * Replay App - plays back & visualizes participant behaviors using collected data
* **Hybrid-HMD**: AR application for HoloLens
* **Hybrid-smartphone**: smartphone application

# Setup
Requirements:
* Unity 2021.3.21f1 or higher
* Microsoft Visual Studio 2019 or greater

Supported hardware:
* HoloLens2 

Packages:
* Mixed Reality Toolkit v3.0.0
* OpenXR Plugin v1.8.2
* Photon Unity Networking Plugin v2.41

# Experiment Application
1. Open scene in Unity: ```Assets/0.Scenes/ExperimentTool.unity```
2. Run the application in Unity editor
3. In **SessionManager** component, enter the **Study Session Info** (```userID```, ```conditionID```)
4. Press Start Session button

# Replay Application
1. Open scene in Unity: ```Assets/0.Scenes/ReplayTool.unity```
3. In **ReplayManager** component, enter the ```UserID```, ```ConditionID```, ```Folderpath``` to your csv file
4. Run the application in Unity editor

# AR Application
1. Open scene in Unity: ```Assets/0.Scenes/MainSessionHMD.unity```
2. Switch to Universal Windows Platform
3. Set build settings to the following and build project:
    * Set Build Type to D3D Project
    * Set Target SDK Version to Latest installed
    * Set Minimum Platform Version to 10.0.10240.0
    * Set Visual Studio Version to Latest installed
4. Deploy app to the HoloLens, following the [MRTK deployment tutorial](https://learn.microsoft.com/en-us/windows/mixed-reality/develop/advanced-concepts/using-visual-studio?tabs=hl2)
 
# Smartphone Application:
1. Open scene in Unity: ```Assets/0.Scenes/SPview.unity```
2. Switch to Android and build project

# Acknowledgements
이 프로젝트는 2019년도 정부(과학기술정보통신부)의 재원으로 정보통신기획평가원의 지원을 받아 수행된 프로젝트임 (No.2019-0-01270,스마트 안경을 위한 WISE AR UI/UX 플랫폼 개발)

This work was supported by Institute of Information & communications Technology Planning & Evaluation (IITP) grant funded by the Korea government(MSIT) (No.2019-0-01270, WISE AR UI/UX Platform Development for Smartglasses)
