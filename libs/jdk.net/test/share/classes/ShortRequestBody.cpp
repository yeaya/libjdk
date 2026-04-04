#include <ShortRequestBody.h>
#include <ShortRequestBody$ByteArrayRequestBody.h>
#include <ShortRequestBody$FileRequestBody.h>
#include <ShortRequestBody$Server.h>
#include <ShortRequestBody$StringRequestBody.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/net/http/HttpTimeoutException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/TimeoutException.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

#undef BODY_LENGTHS
#undef BODY_OFFSETS
#undef BYTE_ARRAY_BODY
#undef FILE_BODY
#undef MARKER
#undef SECONDS
#undef STRING_BODY

using $ShortRequestBody$ByteArrayRequestBody = ::ShortRequestBody$ByteArrayRequestBody;
using $ShortRequestBody$FileRequestBody = ::ShortRequestBody$FileRequestBody;
using $ShortRequestBody$Server = ::ShortRequestBody$Server;
using $ShortRequestBody$StringRequestBody = ::ShortRequestBody$StringRequestBody;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $HttpTimeoutException = ::java::net::http::HttpTimeoutException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $TimeoutException = ::java::util::concurrent::TimeoutException;
using $Supplier = ::java::util::function::Supplier;

class ShortRequestBody$$Lambda$lambda$main$0 : public $Supplier {
	$class(ShortRequestBody$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return ShortRequestBody::lambda$main$0();
	}
};
$Class* ShortRequestBody$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShortRequestBody$$Lambda$lambda$main$0, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ShortRequestBody$$Lambda$lambda$main$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ShortRequestBody$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(ShortRequestBody$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortRequestBody$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* ShortRequestBody$$Lambda$lambda$main$0::class$ = nullptr;

class ShortRequestBody$$Lambda$lambda$main$1$1 : public $Supplier {
	$class(ShortRequestBody$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($HttpClient* sharedClient) {
		$set(this, sharedClient, sharedClient);
	}
	virtual $Object* get() override {
		 return ShortRequestBody::lambda$main$1(sharedClient);
	}
	$HttpClient* sharedClient = nullptr;
};
$Class* ShortRequestBody$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sharedClient", "Ljava/net/http/HttpClient;", nullptr, $PUBLIC, $field(ShortRequestBody$$Lambda$lambda$main$1$1, sharedClient)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpClient;)V", nullptr, $PUBLIC, $method(ShortRequestBody$$Lambda$lambda$main$1$1, init$, void, $HttpClient*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ShortRequestBody$$Lambda$lambda$main$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ShortRequestBody$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ShortRequestBody$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortRequestBody$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* ShortRequestBody$$Lambda$lambda$main$1$1::class$ = nullptr;

$Path* ShortRequestBody::testSrc = nullptr;
$String* ShortRequestBody::STRING_BODY = nullptr;
$bytes* ShortRequestBody::BYTE_ARRAY_BODY = nullptr;
$Path* ShortRequestBody::FILE_BODY = nullptr;
$ints* ShortRequestBody::BODY_LENGTHS = nullptr;
$ints* ShortRequestBody::BODY_OFFSETS = nullptr;
$String* ShortRequestBody::MARKER = nullptr;
$bytes* ShortRequestBody::requestEnd = nullptr;

void ShortRequestBody::init$() {
}

void ShortRequestBody::main($StringArray* args) {
	$init(ShortRequestBody);
	$useLocalObjectStack();
	$var($HttpClient, sharedClient, $HttpClient::newHttpClient());
	$var($List, clientSuppliers, $new($ArrayList));
	clientSuppliers->add($$new(ShortRequestBody$$Lambda$lambda$main$0));
	clientSuppliers->add($$new(ShortRequestBody$$Lambda$lambda$main$1$1, sharedClient));
	{
		$var($ShortRequestBody$Server, server, $new($ShortRequestBody$Server));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($Iterator, i$, clientSuppliers->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Supplier, cs, $cast($Supplier, i$->next()));
					{
						$nc($System::err)->println("\n---- next supplier ----\n"_s);
						$var($URI, uri, $new($URI, $$str({"http://localhost:"_s, $$str(server->getPort()), "/"_s, ShortRequestBody::MARKER})));
						success(cs, uri, $$new($ShortRequestBody$StringRequestBody, ShortRequestBody::STRING_BODY, 0));
						success(cs, uri, $$new($ShortRequestBody$ByteArrayRequestBody, ShortRequestBody::BYTE_ARRAY_BODY, 0));
						success(cs, uri, $$new($ShortRequestBody$FileRequestBody, ShortRequestBody::FILE_BODY, 0));
						success(cs, uri, $$new($ShortRequestBody$StringRequestBody, ShortRequestBody::STRING_BODY, 0));
						success(cs, uri, $$new($ShortRequestBody$ByteArrayRequestBody, ShortRequestBody::BYTE_ARRAY_BODY, 0));
						success(cs, uri, $$new($ShortRequestBody$FileRequestBody, ShortRequestBody::FILE_BODY, 0));
						for (int32_t i = 1; i < ShortRequestBody::BODY_OFFSETS->length; ++i) {
							failureBlocking(cs, uri, $$new($ShortRequestBody$StringRequestBody, ShortRequestBody::STRING_BODY, ShortRequestBody::BODY_OFFSETS->get(i)));
							failureBlocking(cs, uri, $$new($ShortRequestBody$ByteArrayRequestBody, ShortRequestBody::BYTE_ARRAY_BODY, ShortRequestBody::BODY_OFFSETS->get(i)));
							failureBlocking(cs, uri, $$new($ShortRequestBody$FileRequestBody, ShortRequestBody::FILE_BODY, ShortRequestBody::BODY_OFFSETS->get(i)));
							failureNonBlocking(cs, uri, $$new($ShortRequestBody$StringRequestBody, ShortRequestBody::STRING_BODY, ShortRequestBody::BODY_OFFSETS->get(i)));
							failureNonBlocking(cs, uri, $$new($ShortRequestBody$ByteArrayRequestBody, ShortRequestBody::BYTE_ARRAY_BODY, ShortRequestBody::BODY_OFFSETS->get(i)));
							failureNonBlocking(cs, uri, $$new($ShortRequestBody$FileRequestBody, ShortRequestBody::FILE_BODY, ShortRequestBody::BODY_OFFSETS->get(i)));
						}
					}
				}
			} catch ($Throwable& t$) {
				try {
					server->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			server->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ShortRequestBody::success($Supplier* clientSupplier, $URI* uri, $HttpRequest$BodyPublisher* publisher) {
	$init(ShortRequestBody);
	$useLocalObjectStack();
	$var($CompletableFuture, cf, nullptr);
	$var($HttpRequest, request, $$nc($$nc($HttpRequest::newBuilder(uri))->POST(publisher))->build());
	$assign(cf, $$sure($HttpClient, $nc(clientSupplier)->get())->sendAsync(request, $($HttpResponse$BodyHandlers::discarding())));
	$init($TimeUnit);
	$var($HttpResponse, resp, $cast($HttpResponse, $nc(cf)->get(30, $TimeUnit::SECONDS)));
	$nc($System::err)->println($$str({"Response code: "_s, $$str($nc(resp)->statusCode())}));
	bool var$0 = resp->statusCode() == 200;
	check(var$0, nullptr, $$new($ObjectArray, {
		"Expected 200, got "_s,
		$($Integer::valueOf(resp->statusCode()))
	}));
}

void ShortRequestBody::failureNonBlocking($Supplier* clientSupplier, $URI* uri, $HttpRequest$BodyPublisher* publisher) {
	$init(ShortRequestBody);
	$useLocalObjectStack();
	$var($CompletableFuture, cf, nullptr);
	$var($HttpRequest, request, $$nc($$nc($HttpRequest::newBuilder(uri))->POST(publisher))->build());
	$assign(cf, $$sure($HttpClient, $nc(clientSupplier)->get())->sendAsync(request, $($HttpResponse$BodyHandlers::discarding())));
	try {
		$init($TimeUnit);
		$var($HttpResponse, r, $cast($HttpResponse, $nc(cf)->get(30, $TimeUnit::SECONDS)));
		$throwNew($RuntimeException, $$str({"Unexpected response: "_s, $$str($nc(r)->statusCode())}));
	} catch ($TimeoutException& x) {
		$throwNew($RuntimeException, "Unexpected timeout"_s, x);
	} catch ($ExecutionException& expected) {
		$nc($System::err)->println($$str({"Caught expected: "_s, expected}));
		$var($Throwable, t, expected->getCause());
		check($instanceOf($IOException, t), t, $$new($ObjectArray, {
			"Expected cause IOException, but got: "_s,
			t
		}));
		$var($String, msg, $nc(t)->getMessage());
		bool var$0 = $nc(msg)->contains("Too many"_s);
		check(var$0 || msg->contains("Too few"_s), t, $$new($ObjectArray, {
			"Expected Too many|Too few, got: "_s,
			t
		}));
	}
}

void ShortRequestBody::failureBlocking($Supplier* clientSupplier, $URI* uri, $HttpRequest$BodyPublisher* publisher) {
	$init(ShortRequestBody);
	$useLocalObjectStack();
	$var($HttpRequest, request, $$nc($$nc($HttpRequest::newBuilder(uri))->POST(publisher))->build());
	try {
		$var($HttpResponse, r, $$sure($HttpClient, $nc(clientSupplier)->get())->send(request, $($HttpResponse$BodyHandlers::discarding())));
		$throwNew($RuntimeException, $$str({"Unexpected response: "_s, $$str($nc(r)->statusCode())}));
	} catch ($HttpTimeoutException& x) {
		$throwNew($RuntimeException, "Unexpected timeout"_s, x);
	} catch ($IOException& expected) {
		$nc($System::err)->println($$str({"Caught expected: "_s, expected}));
		$var($String, msg, expected->getMessage());
		bool var$0 = $nc(msg)->contains("Too many"_s);
		check(var$0 || msg->contains("Too few"_s), expected, $$new($ObjectArray, {
			"Expected Too many|Too few, got: "_s,
			expected
		}));
	}
}

$String* ShortRequestBody::readRequestHeaders($InputStream* is) {
	$init(ShortRequestBody);
	$useLocalObjectStack();
	int32_t requestEndCount = 0;
	int32_t r = 0;
	int32_t eol = -1;
	$var($StringBuilder, headers, $new($StringBuilder));
	while ((r = $nc(is)->read()) != -1) {
		if (r == u'\r' && eol < 0) {
			eol = headers->length();
		}
		headers->append((char16_t)r);
		if (r == ShortRequestBody::requestEnd->get(requestEndCount)) {
			++requestEndCount;
			if (requestEndCount == 4) {
				break;
			}
		} else {
			requestEndCount = 0;
		}
	}
	if (eol <= 0) {
		return nullptr;
	}
	$var($String, requestLine, $(headers->toString())->substring(0, eol));
	if (!requestLine->contains(ShortRequestBody::MARKER)) {
		return nullptr;
	}
	return headers->toString();
}

int32_t ShortRequestBody::fileSize($Path* p) {
	$init(ShortRequestBody);
	try {
		return (int32_t)$Files::size(p);
	} catch ($IOException& x) {
		$throwNew($UncheckedIOException, x);
	}
	$shouldNotReachHere();
}

bool ShortRequestBody::check(bool cond, $Throwable* t, $ObjectArray* failedArgs) {
	$init(ShortRequestBody);
	$useLocalObjectStack();
	if (cond) {
		return true;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($ObjectArray, arr$, failedArgs);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			sb->append(o);
		}
	}
	$throwNew($RuntimeException, $(sb->toString()), t);
}

$HttpClient* ShortRequestBody::lambda$main$1($HttpClient* sharedClient) {
	$init(ShortRequestBody);
	return sharedClient;
}

$HttpClient* ShortRequestBody::lambda$main$0() {
	$init(ShortRequestBody);
	return $HttpClient::newHttpClient();
}

void ShortRequestBody::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ShortRequestBody::STRING_BODY, "Hello world"_s);
	$assignStatic(ShortRequestBody::MARKER, "ShortRequestBody"_s);
	$assignStatic(ShortRequestBody::testSrc, $Paths::get($($System::getProperty("test.src"_s, "."_s)), $$new($StringArray, 0)));
	$assignStatic(ShortRequestBody::BYTE_ARRAY_BODY, $new($bytes, {
		(int8_t)202,
		(int8_t)254,
		(int8_t)186,
		(int8_t)190
	}));
	$assignStatic(ShortRequestBody::FILE_BODY, $$nc($$nc($nc(ShortRequestBody::testSrc)->resolve("docs"_s))->resolve("files"_s))->resolve("foo.txt"_s));
	$assignStatic(ShortRequestBody::BODY_LENGTHS, $new($ints, {
		ShortRequestBody::STRING_BODY->length(),
		ShortRequestBody::BYTE_ARRAY_BODY->length,
		ShortRequestBody::fileSize(ShortRequestBody::FILE_BODY)
	}));
	$assignStatic(ShortRequestBody::BODY_OFFSETS, $new($ints, {
		0,
		+1,
		-1,
		+2,
		-2,
		+3,
		-3
	}));
	$assignStatic(ShortRequestBody::requestEnd, $new($bytes, {
		(int8_t)u'\r',
		(int8_t)u'\n',
		(int8_t)u'\r',
		(int8_t)u'\n'
	}));
}

ShortRequestBody::ShortRequestBody() {
}

$Class* ShortRequestBody::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ShortRequestBody$$Lambda$lambda$main$0")) {
			return ShortRequestBody$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("ShortRequestBody$$Lambda$lambda$main$1$1")) {
			return ShortRequestBody$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"testSrc", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, testSrc)},
		{"STRING_BODY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, STRING_BODY)},
		{"BYTE_ARRAY_BODY", "[B", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, BYTE_ARRAY_BODY)},
		{"FILE_BODY", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, FILE_BODY)},
		{"BODY_LENGTHS", "[I", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, BODY_LENGTHS)},
		{"BODY_OFFSETS", "[I", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, BODY_OFFSETS)},
		{"MARKER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, MARKER)},
		{"requestEnd", "[B", nullptr, $STATIC | $FINAL, $staticField(ShortRequestBody, requestEnd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShortRequestBody, init$, void)},
		{"check", "(ZLjava/lang/Throwable;[Ljava/lang/Object;)Z", nullptr, $STATIC | $TRANSIENT, $staticMethod(ShortRequestBody, check, bool, bool, $Throwable*, $ObjectArray*)},
		{"failureBlocking", "(Ljava/util/function/Supplier;Ljava/net/URI;Ljava/net/http/HttpRequest$BodyPublisher;)V", "(Ljava/util/function/Supplier<Ljava/net/http/HttpClient;>;Ljava/net/URI;Ljava/net/http/HttpRequest$BodyPublisher;)V", $STATIC, $staticMethod(ShortRequestBody, failureBlocking, void, $Supplier*, $URI*, $HttpRequest$BodyPublisher*), "java.lang.Exception"},
		{"failureNonBlocking", "(Ljava/util/function/Supplier;Ljava/net/URI;Ljava/net/http/HttpRequest$BodyPublisher;)V", "(Ljava/util/function/Supplier<Ljava/net/http/HttpClient;>;Ljava/net/URI;Ljava/net/http/HttpRequest$BodyPublisher;)V", $STATIC, $staticMethod(ShortRequestBody, failureNonBlocking, void, $Supplier*, $URI*, $HttpRequest$BodyPublisher*), "java.lang.Exception"},
		{"fileSize", "(Ljava/nio/file/Path;)I", nullptr, $STATIC, $staticMethod(ShortRequestBody, fileSize, int32_t, $Path*)},
		{"lambda$main$0", "()Ljava/net/http/HttpClient;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ShortRequestBody, lambda$main$0, $HttpClient*)},
		{"lambda$main$1", "(Ljava/net/http/HttpClient;)Ljava/net/http/HttpClient;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ShortRequestBody, lambda$main$1, $HttpClient*, $HttpClient*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ShortRequestBody, main, void, $StringArray*), "java.lang.Exception"},
		{"readRequestHeaders", "(Ljava/io/InputStream;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(ShortRequestBody, readRequestHeaders, $String*, $InputStream*), "java.io.IOException"},
		{"success", "(Ljava/util/function/Supplier;Ljava/net/URI;Ljava/net/http/HttpRequest$BodyPublisher;)V", "(Ljava/util/function/Supplier<Ljava/net/http/HttpClient;>;Ljava/net/URI;Ljava/net/http/HttpRequest$BodyPublisher;)V", $STATIC, $staticMethod(ShortRequestBody, success, void, $Supplier*, $URI*, $HttpRequest$BodyPublisher*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShortRequestBody$Server", "ShortRequestBody", "Server", $STATIC},
		{"ShortRequestBody$FileRequestBody", "ShortRequestBody", "FileRequestBody", $STATIC},
		{"ShortRequestBody$ByteArrayRequestBody", "ShortRequestBody", "ByteArrayRequestBody", $STATIC},
		{"ShortRequestBody$StringRequestBody", "ShortRequestBody", "StringRequestBody", $STATIC},
		{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ShortRequestBody",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ShortRequestBody$Server,ShortRequestBody$FileRequestBody,ShortRequestBody$ByteArrayRequestBody,ShortRequestBody$StringRequestBody,ShortRequestBody$AbstractDelegateRequestBody"
	};
	$loadClass(ShortRequestBody, name, initialize, &classInfo$$, ShortRequestBody::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ShortRequestBody);
	});
	return class$;
}

$Class* ShortRequestBody::class$ = nullptr;