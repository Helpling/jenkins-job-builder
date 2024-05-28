name: '{name}-source-tests'
project-type: freestyle
description: |
  Default tests job
  <!-- {labels} -->
properties:
  - copyartifact:
      projects: '{name}-*'
disabled: false
concurrent: true
builders:
  - trigger-builds: '{obj:tb}'
publishers:
  - trigger-parameterized-builds: '{obj:tpb}'
  - workspace-cleanup:
      disable-deferred-wipeout: true
wrappers:
  - workspace-cleanup
  - timestamps
  - inject: '{obj:lastjob}'
