#include <HeadersTest2.h>
#include <HeadersTest2$CompareTest.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $HeadersTest2$CompareTest = ::HeadersTest2$CompareTest;
using $HeadersTest2$CompareTestArray = $Array<HeadersTest2$CompareTest>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

$URI* HeadersTest2::uri = nullptr;
$HeadersTest2$CompareTestArray* HeadersTest2::compareTests = nullptr;

void HeadersTest2::init$() {
}

$HeadersTest2$CompareTest* HeadersTest2::test(bool s, $List* l1, $List* l2) {
	$init(HeadersTest2);
	return $new($HeadersTest2$CompareTest, s, l1, l2);
}

void HeadersTest2::main($StringArray* args) {
	$init(HeadersTest2);
	$useLocalObjectStack();
	$var($HeadersTest2$CompareTestArray, arr$, HeadersTest2::compareTests);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($HeadersTest2$CompareTest, test, arr$->get(i$));
		{
			$nc(test)->run();
		}
	}
}

void HeadersTest2::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(HeadersTest2::uri, $URI::create("http://www.foo.com/"_s));
	$var($List, var$0, $List::of("Dontent-length"_s, "99"_s));
	$var($List, var$1, $List::of("Dontent-length"_s, "99"_s));
	$var($List, var$2, $List::of("Name1"_s, "val1"_s, "Name1"_s, "val2"_s, "name1"_s, "val3"_s));
	$var($List, var$3, $List::of("Name1"_s, "val1"_s, "Name1"_s, "val2"_s, "name1"_s, "val3"_s));
	$assignStatic(HeadersTest2::compareTests, $new($HeadersTest2$CompareTestArray, {
		$(HeadersTest2::test(true, var$0, $($List::of("dontent-length"_s, "99"_s)))),
		$(HeadersTest2::test(false, var$1, $($List::of("dontent-length"_s, "100"_s)))),
		$(HeadersTest2::test(false, var$2, $($List::of("Name1"_s, "val1"_s, "Name1"_s, "val2"_s)))),
		$(HeadersTest2::test(true, var$3, $($List::of("NaMe1"_s, "val1"_s, "NAme1"_s, "val2"_s, "name1"_s, "val3"_s))))
	}));
}

HeadersTest2::HeadersTest2() {
}

$Class* HeadersTest2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uri", "Ljava/net/URI;", nullptr, $STATIC, $staticField(HeadersTest2, uri)},
		{"compareTests", "[LHeadersTest2$CompareTest;", nullptr, $STATIC, $staticField(HeadersTest2, compareTests)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadersTest2, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadersTest2, main, void, $StringArray*)},
		{"test", "(ZLjava/util/List;Ljava/util/List;)LHeadersTest2$CompareTest;", "(ZLjava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)LHeadersTest2$CompareTest;", $STATIC, $staticMethod(HeadersTest2, test, $HeadersTest2$CompareTest*, bool, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadersTest2$CompareTest", "HeadersTest2", "CompareTest", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadersTest2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HeadersTest2$CompareTest"
	};
	$loadClass(HeadersTest2, name, initialize, &classInfo$$, HeadersTest2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HeadersTest2);
	});
	return class$;
}

$Class* HeadersTest2::class$ = nullptr;