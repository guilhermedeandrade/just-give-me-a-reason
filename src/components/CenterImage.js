import React from 'react'
import { Image } from 'mdx-deck'

function CenterImage({ src }) {
  return (
    <Image
      src={src}
      style={{ backgroundSize: 'contain', width: '80%', height: '80%' }}
    />
  )
}

export default CenterImage
