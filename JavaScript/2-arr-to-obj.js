function assignPersonToJob(names, jobs) {
  var r={}
  names.forEach((name, i) => r[name] = jobs[i])
  return r
}
