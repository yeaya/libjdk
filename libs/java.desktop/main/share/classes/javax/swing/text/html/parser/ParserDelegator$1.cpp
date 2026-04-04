#include <javax/swing/text/html/parser/ParserDelegator$1.h>
#include <java/io/InputStream.h>
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

void ParserDelegator$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* ParserDelegator$1::run() {
	$beforeCallerSensitive();
	$load($ParserDelegator);
	return $ParserDelegator::class$->getResourceAsStream(this->val$name);
}

ParserDelegator$1::ParserDelegator$1() {
}

$Class* ParserDelegator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ParserDelegator$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(ParserDelegator$1, init$, void, $String*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ParserDelegator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.parser.ParserDelegator",
		"getResourceAsStream",
		"(Ljava/lang/String;)Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.parser.ParserDelegator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.parser.ParserDelegator$1",
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
		"javax.swing.text.html.parser.ParserDelegator"
	};
	$loadClass(ParserDelegator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParserDelegator$1);
	});
	return class$;
}

$Class* ParserDelegator$1::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax