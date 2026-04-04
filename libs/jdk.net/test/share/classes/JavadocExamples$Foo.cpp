#include <JavadocExamples$Foo.h>
#include <JavadocExamples.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

void JavadocExamples$Foo::init$($bytes* bytes) {
	$set(this, bytes, bytes);
}

$String* JavadocExamples$Foo::asString() {
	$init($StandardCharsets);
	return $new($String, this->bytes, $StandardCharsets::UTF_8);
}

JavadocExamples$Foo::JavadocExamples$Foo() {
}

$Class* JavadocExamples$Foo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bytes", "[B", nullptr, 0, $field(JavadocExamples$Foo, bytes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(JavadocExamples$Foo, init$, void, $bytes*)},
		{"asString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$Foo, asString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JavadocExamples$Foo", "JavadocExamples", "Foo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JavadocExamples$Foo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JavadocExamples"
	};
	$loadClass(JavadocExamples$Foo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$Foo);
	});
	return class$;
}

$Class* JavadocExamples$Foo::class$ = nullptr;