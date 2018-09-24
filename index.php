<html lang="ja">
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Mininng & Faucet</title>
	<link href="bootstrap/css/bootstrap.min.css" rel="stylesheet">
	<!--[if lt IE 9]>
		<script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
		<script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
	<![endif]-->
	<script src="https://www.google.com/recaptcha/api.js?hl=ja"></script>
	<script src="jquery.min.js"></script>
	<script src="bootstrap/js/bootstrap.min.js"></script>

	<link href="main.css" rel="stylesheet">
</head>
<body style="background: #ffffff;">


<nav class="navbar navbar-default navbar-static-top">
	<div class="container-fluid">
		<div class="navbar-header">
			<a href='#' data-toggle='modal' data-target='#sampleModal' class="navbar-toggle collapsed">About</a>
			<a class="navbar-brand" href="#">Mining Faucet</a>
		</div>
	</div>
</nav>




<div class='modal fade' id='sampleModal' tabindex='-1'>
	<div class='modal-dialog modal-default center-block' style="width: 80%;">
		<div class='modal-content'>
			<div class='modal-body'>
				このサイトでは、一定時間ごとにハッシュレートがもらえ、そのハッシュレートで、擬似的にモナコインをもらうことができます。<br>
				そのモナコインでさらにハッシュレートを買ってもよし、コツコツ貯めて払い出してもよし、友人と協力してプールマイニングしてもよし。	<br>
			</div>
		</div>
	</div>
</div>

<!-- <div class='modal fade' id='sampleModal' tabindex='-1'>
	<div class='modal-dialog modal-default'>
		<div class='modal-content'>
			<div class='modal-body'>					
				<div class="panel panel-info center-block" style="width: 80%;">
					<div class="panel-heading">About</div>
					<div class="panel-body">
						このサイトでは、一定時間ごとにハッシュレートがもらえ、そのハッシュレートで、擬似的にモナコインをもらうことができます。<br>
						そのモナコインでさらにハッシュレートを買ってもよし、コツコツ貯めて払い出してもよし、友人と協力してプールマイニングしてもよし。	<br>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
-->


<div class="panel panel-success center-block" style="width: 80%;">
	<div class="panel-heading">
		Account Info
	</div>
<!--	<div class="panel-body text-center">
	</div> -->
		<table class="table">
		<tr>
			<th>Monacoin address</th>
			<td><a href="monancoin:MVjBk17FsGun5UsxdmKsTE8txAPg1mbj3E">monacoin:MVjBk17FsGun5UsxdmKsTE8txAPg1mbj3E</a></td>
		</tr>
		<tr>
			<th>Balance</th>
			<td>20Mona</td>
		</tr>
		<tr>
			<th>ハッシュレート</th>
			<td>10000GHash</td>
		</tr>
	</table>
</div>

<div class="panel panel-default center-block" style="width: 80%;">
	<div class="panel-heading">
		Faucet
	</div>
	<div class="panel-body text-center">
		一時間に0.1Mona無料でもらうことができます。<br><br>
		<form class="text-center" method='post' action='index.html'>
			<div class="g-recaptcha" dark-theme="dark" data-size="compact" data-sitekey='{6LfEdiITAAAAADP1Wxdmfohl5YgGM7PHpRH2QKgk}'></div>
			<noscript>
				<div style="width: 302px; height: 352px;">
					<div style="width: 302px; height: 352px; position: relative;">
						<div style="width: 302px; height: 352px; position: absolute;">
							<iframe src="https://www.google.com/recaptcha/api/fallback?k={6LfEdiITAAAAADP1Wxdmfohl5YgGM7PHpRH2QKgk}"
							frameborder="0" scrolling="no"
							style="width: 302px; height:352px; border-style: none;">
							</iframe>
						</div>
						<div style="width: 250px; height: 80px; position: absolute; border-style: none; bottom: 21px; left: 25px; margin: 0px; padding: 0px; right: 25px;">
							<textarea id="g-recaptcha-response" name="g-recaptcha-response"
								class="g-recaptcha-response"
								style="width: 250px; height: 80px; border: 1px solid #c1c1c1;
								margin: 0px; padding: 0px; resize: none;" value="">
							</textarea>
						</div>
					</div>
				</div>
			</noscript>
			<button type='submit' class='btn btn-primary'>もらう</button>
</form>

	</div>
</div>

<?php


require_once('easybitcoin.php');

$monacoind = new Bitcoin('monacoinrpc','CTFZZCcJfhADKXQDSHJAnccZ3nGVQmyKsDcpAw7aQAkm','localhost','9123');

//echo "<br>\n##########getinfo##########<br><br>\n";
//var_dump($monacoind->getinfo());
echo "<br>\nbalanse(all):".$monacoind->getbalance();
echo "<br>\nblock:".$monacoind->getblockcount();
?>

</body>
</html>
