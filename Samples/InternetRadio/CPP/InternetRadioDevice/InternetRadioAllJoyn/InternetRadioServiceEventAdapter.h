//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace maker { namespace InternetRadio {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IInternetRadioService. Instead, InternetRadioServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class InternetRadioServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IInternetRadioService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioAddPresetCalledEventArgs^>^ AddPresetCalled;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioNextPresetCalledEventArgs^>^ NextPresetCalled;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioPlayPresetCalledEventArgs^>^ PlayPresetCalled;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioPreviousPresetCalledEventArgs^>^ PreviousPresetCalled;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioRemovePresetCalledEventArgs^>^ RemovePresetCalled;

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioGetCurrentlyPlayingRequestedEventArgs^>^ GetCurrentlyPlayingRequested;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioGetPowerRequestedEventArgs^>^ GetPowerRequested;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioGetPresetsRequestedEventArgs^>^ GetPresetsRequested;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioGetVersionRequestedEventArgs^>^ GetVersionRequested;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioGetVolumeRequestedEventArgs^>^ GetVolumeRequested;
    
    // Property Write Events
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioSetPowerRequestedEventArgs^>^ SetPowerRequested;
    event Windows::Foundation::TypedEventHandler<InternetRadioServiceEventAdapter^, InternetRadioSetVolumeRequestedEventArgs^>^ SetVolumeRequested;

    // IInternetRadioService Implementation
    virtual Windows::Foundation::IAsyncOperation<InternetRadioAddPresetResult^>^ AddPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberPresetAddress);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioNextPresetResult^>^ NextPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioPlayPresetResult^>^ PlayPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioPreviousPresetResult^>^ PreviousPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioRemovePresetResult^>^ RemovePresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName);

    virtual Windows::Foundation::IAsyncOperation<InternetRadioGetCurrentlyPlayingResult^>^ GetCurrentlyPlayingAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioGetPowerResult^>^ GetPowerAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioGetPresetsResult^>^ GetPresetsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioGetVolumeResult^>^ GetVolumeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    virtual Windows::Foundation::IAsyncOperation<InternetRadioSetPowerResult^>^ SetPowerAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ bool value);
    virtual Windows::Foundation::IAsyncOperation<InternetRadioSetVolumeResult^>^ SetVolumeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ double value);
};

} } } } 