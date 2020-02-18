interface Result {
  loading: boolean
  error: string | null
  data: string[] | null
}

interface Status {
  result: Result
  enabled: boolean
}

function getData({ result, enabled }: Status) {
  if (!enabled) return 'Unavailable'
  else {
    if (result.error) return `Something went wrong: ${result.error}`
    if (result.loading) return 'Loading...'
    if (result.data && result.data.length === 0) return 'List is empty!'
    if (result.data) return `${result.data.length} items in the array`
  }
}

const data = getData({
  result: { loading: true, error: null, data: null },
  enabled: false
})

console.log(data) // Unavailable
