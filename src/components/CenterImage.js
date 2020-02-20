import React from 'react'
import { Image } from 'mdx-deck'

function CenterImage({ src }) {
  return (
    <Image
      src={src}
      style={{ backgroundSize: 'contain', width: '75%', height: '75%' }}
    />
  )
}

export default CenterImage
