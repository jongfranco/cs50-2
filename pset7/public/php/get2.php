<!DOCTYPE html>

<html>
    <head>
        <title>Contents of Get (v.2)</title>
        <link href="get.css" rel="stylesheet" />
    </head>
    <body>
        <table>
        
        <!-- fancy new way to do a PHP foreach -->
        <?php foreach($_GET as $key => $value): ?>
            <tr>
                <td class="key"><?= $key ?></td>
                <td class="value"><?= $value ?></td>
            </tr>
        <?php endforeach; ?>
        
        </table>
    </body>
</html>