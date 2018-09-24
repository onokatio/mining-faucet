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
				<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbarEexample1">
					<span class="sr-only">Toggle navigation</span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
				</button>
				<a class="navbar-brand" href="#">Mining Faucet</a>
			</div>





index.html <div class="collapse navbar-collapse" id="navbarEexample1">
				<ul class="nav navbar-nav navbar-right">
					<li><a href="#" data-toggle='modal' data-target='#sampleModal'>About</a></li>
				</ul>
			</div>
		</div>
	</nav>

	<div class='modal fade' id='sampleModal' tabindex='-1'>	
		<div class='modal-dialog modal-default'>
			<div class='modal-content'>
<!--				<div class='modal-header'>
					<button type='button' class='close' data-dismiss='modal'><span>×</span></button>
				</div> -->
				<div class='modal-body'>
<!--					このサイトでは、一定時間ごとにハッシュレートがもらえ、そのハッシュレートで、擬似的にモナコインをもらうことができます。<br>そのモナコインでさらにハッシュレートを買ってもよし、コツコツ貯めて払い出してもよし、友人と協力してプールマイニングしてもよし。<br> -->
					
					<div class="panel panel-info center-block" style="width: 80%;">
						<div class="panel-heading">
							
						</div>
						<div class="panel-body">
							このサイトでは、一定時間ごとにハッシュレートがもらえ、そのハッシュレートで、擬似的にモナコインをもらうことができます。<br>
							そのモナコインでさらにハッシュレートを買ってもよし、コツコツ貯めて払い出してもよし、友人と協力してプールマイニングしてもよし。	<br>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>


<div class="panel panel-success center-block" style="width: 80%;">
	<div class="panel-heading">
		Account Info
	</div>
<!--	<div class="panel-body text-center">
	</div> -->
		<table class="table">
		<tr>
			<th>ユーザー名</th>
			<td>テストユーザー1</td>
		</tr>
		<tr>
			<th>残高</th>
			<td>20Mona</td>
		</tr>
		<tr>
			<th>ハッシュレート</th>
			<td>100KHash</td>
		</tr>
	</table>
</div>

<div class="panel panel-default center-block" style="width: 80%;">
	<div class="panel-heading">
		Faucet
	</div>
	<div class="panel-body text-center">
		現在、一時間に0.1Mona無料でもらえます。<br><br>
<!--		<script>
		document.write("
		<a class='btn btn-success btn-lg' data-toggle='modal' data-target='#sampleModal'>ハッシュレートをもらう</a>" +
		"<div class='modal fade' id='sampleModal' tabindex='-1'>" +
			"<div class='modal-dialog modal-default'>" +
				"<div class='modal-content'>" +
					"<div class='modal-header'>" +
						"<button type='button' class='close' data-dismiss='modal'><span>×</span></button>" +
					"</div>" +
					"<div class='modal-body'>" +
						"<iframe src='givehash.html'>" +
						"<a class='btn btn-primary' href='givehash.html'>もらう</a>" +
						"</iframe>" +
					"</div>" +
				"</div>" +
			"</div>" +
		"</div>"
		);
		document.close();
		</script>
		<noscript>
			<iframe src='givehash.html'></iframe> -->
			
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


</body>
</html>
