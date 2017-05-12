# StageController

Authors:

    Peter Polidoro <polidorop@janelia.hhmi.org>

License:

    BSD

## Ancestors

[ModularServer](https://github.com/janelia-arduino/ModularServer)

[ModularDeviceBase](https://github.com/janelia-arduino/ModularDeviceBase)

[StepDirController](https://github.com/janelia-arduino/StepDirController)

[StepperController](https://github.com/janelia-arduino/StepperController)

## Clients

## Devices

[modular_device_base](https://github.com/janelia-modular-devices/modular_device_base.git)

[step_dir_controller](https://github.com/janelia-modular-devices/step_dir_controller.git)

[stepper_controller](https://github.com/janelia-modular-devices/stepper_controller.git)

## API

```json
{
  "id":"getApi",
  "result":{
    "firmware":["StageController"],
    "functions":[
      "homeStage",
      "stageHoming",
      "stageHomed",
      "moveStageTo",
      "moveStageSoftlyTo",
      "getStagePositions"
    ],
    "parameters":[
      "stage_positions"
    ],
    "properties":[
      "stageChannelCount",
      "stagePositionMin",
      "stagePositionMax"
    ],
    "callbacks":[]
  }
}
```

## More Detailed Modular Device Information

[modular-devices](https://github.com/janelia-modular-devices/modular-devices)

## Install Library Dependencies

[arduino-libraries](https://github.com/janelia-arduino/arduino-libraries)
