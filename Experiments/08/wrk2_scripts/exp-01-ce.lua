function request()
    local method = "POST"
    local path = "http://127.0.0.1:8084/function/exp08Upstream"
    local headers = {}
    headers["Content-Type"] = "text/plain"
    local body =  "4"

    return wrk.format(method, path, headers, body)

end