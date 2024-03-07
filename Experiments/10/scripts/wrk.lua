wrk.method = "POST"

wrk.headers["Content-Type"] = "application/json"

function request()

    return wrk.format('POST', nil, nil, "1KB")

end