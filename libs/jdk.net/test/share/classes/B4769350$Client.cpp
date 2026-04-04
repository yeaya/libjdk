#include <B4769350$Client.h>
#include <B4769350.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $B4769350 = ::B4769350;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

void B4769350$Client::init$($String* authority, $String* path, bool allowerror) {
	$Thread::init$($$str({"Thread-"_s, path}));
	$set(this, authority, authority);
	$set(this, path, path);
	this->allowerror = allowerror;
}

void B4769350$Client::run() {
	$useLocalObjectStack();
	try {
		$var($URI, u, $new($URI, "http"_s, this->authority, this->path, nullptr, nullptr));
		$var($URL, url, u->toURL());
		$var($URLConnection, urlc, $nc(url)->openConnection());
		{
			$var($InputStream, is, $nc(urlc)->getInputStream());
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$B4769350::read(is);
				} catch ($Throwable& t$) {
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($URISyntaxException& e) {
		$nc($System::out)->println($of(e));
		$init($B4769350);
		$B4769350::error = true;
	} catch ($IOException& e) {
		if (!this->allowerror) {
			$nc($System::out)->println($$str({$($($Thread::currentThread())->getName()), " "_s, e}));
			e->printStackTrace();
			$init($B4769350);
			$B4769350::error = true;
		}
	}
}

B4769350$Client::B4769350$Client() {
}

$Class* B4769350$Client::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"authority", "Ljava/lang/String;", nullptr, 0, $field(B4769350$Client, authority)},
		{"path", "Ljava/lang/String;", nullptr, 0, $field(B4769350$Client, path)},
		{"allowerror", "Z", nullptr, 0, $field(B4769350$Client, allowerror)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(B4769350$Client, init$, void, $String*, $String*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(B4769350$Client, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B4769350$Client", "B4769350", "Client", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B4769350$Client",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"B4769350"
	};
	$loadClass(B4769350$Client, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4769350$Client);
	});
	return class$;
}

$Class* B4769350$Client::class$ = nullptr;