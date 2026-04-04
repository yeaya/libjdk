#include <javax/swing/text/rtf/RTFReader$1.h>
#include <java/io/InputStream.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

void RTFReader$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* RTFReader$1::run() {
	$beforeCallerSensitive();
	$load($RTFReader);
	return $RTFReader::class$->getResourceAsStream($$str({"charsets/"_s, this->val$name, ".txt"_s}));
}

RTFReader$1::RTFReader$1() {
}

$Class* RTFReader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(RTFReader$1, init$, void, $String*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(RTFReader$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.rtf.RTFReader",
		"getCharacterSet",
		"(Ljava/lang/String;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFReader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.rtf.RTFReader$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.rtf.RTFReader"
	};
	$loadClass(RTFReader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RTFReader$1);
	});
	return class$;
}

$Class* RTFReader$1::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax