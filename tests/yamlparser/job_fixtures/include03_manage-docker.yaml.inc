name: '{name}-manage-docker'
project-type: freestyle
description: |
  build/tag/delete project docker image(s)
  <!-- {labels} -->
disabled: false
concurrent: true
builders:
  - copyartifact:
      project: '{name}-get-code'
      filter: 'source.tar.gz'
      which-build: upstream-build
      fallback-to-last-successful: false
publishers:
  - workspace-cleanup:
      disable-deferred-wipeout: true
wrappers:
  - workspace-cleanup
  - timestamps
  - inject:
      properties-content: |
        PROJECTNAME={name}
