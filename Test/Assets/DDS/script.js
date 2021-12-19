function gate_radio_click(r) {
    if (r.id == 'GNOT') {
        console.log('YES');
        for (const x of document.getElementsByName('B'))
            x.disabled = true
        for (const x of document.getElementsByName('Sb'))
            x.disabled = true
    }
    else {
        console.log('NO');
        for (const x of document.getElementsByName('B'))
            x.disabled = false
        for (const x of document.getElementsByName('Sb'))
            x.disabled = false
    }
}

function do_work() {
    gate = "GAND"
    for (const x of document.getElementsByName('G'))
        if (x.checked) {
            gate = x.id
            break
        }
    if (gate == "GAND" || gate == "GOR") {
        a = 0
        if (document.getElementById('A1').checked)
            a = 1
        b = 0
        if (document.getElementById('B1').checked)
            b = 1
        sa = a
        if (document.getElementById('Sa0').checked)
            sa = 0
        else if (document.getElementById('Sa1').checked)
            sa = 1
        sb = b
        if (document.getElementById('Sb0').checked)
            sb = 0
        else if (document.getElementById('Sb1').checked)
            sb = 1
        z = a | b
        sz = sa | sb
        if (gate == "GAND") {
            z = a & b
            sz = sa & sb
        }
        if (document.getElementById('Sz0').checked)
            sz = 0
        else if (document.getElementById('Sz1').checked)
            sz = 1
        x = document.getElementById('table')
        x.innerHTML += `<tr class="d-flex">
                    <th class="col-4">${gate.substring(1)}</th>
                    <th class="col-4">${a}</th>
                    <th class="col-5">${b}</th>
                    <th class="col-5">${z}</th>
                    <th class="col-5 ${(sz == z) ? "bg-success" : "bg-danger"}">${sz}</th>
                </tr> `
    }
    else {
        a = 0
        if (document.getElementById('A1').checked)
            a = 1
        sa = a
        if (document.getElementById('Sa0').checked)
            sa = 0
        else if (document.getElementById('Sa1').checked)
            sa = 1
        z = 1 - a
        sz = 1 - sa
        if (document.getElementById('Sz0').checked)
            sz = 0
        else if (document.getElementById('Sz1').checked)
            sz = 1
        x = document.getElementById('table')
        x.innerHTML += `<tr class="d-flex">
                        <th class="col-4">NOT</th>
                        <th class="col-4">${a}</th>
                        <th class="col-5">X</th>
                        <th class="col-5">${z}</th>
                        <th class="col-5">${sz}</th>
                    </tr> `
    }
}