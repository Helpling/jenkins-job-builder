name: '{name}-gerrit'
project-type: freestyle
description: |
  Gerrit Jenkins job listening for code review related events for {name} project.
  <!-- {labels} -->
disabled: false
concurrent: true
publishers:
  - archive:
      artifacts: '*_parameters.txt'
      allow-empty: true
      fingerprint: true
  - workspace-cleanup:
      disable-deferred-wipeout: true
wrappers:
  - workspace-cleanup
  - timestamps
