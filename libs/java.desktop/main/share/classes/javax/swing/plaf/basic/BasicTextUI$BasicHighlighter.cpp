#include <javax/swing/plaf/basic/BasicTextUI$BasicHighlighter.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicTextUI$BasicHighlighter::hashCode() {
	return this->$DefaultHighlighter::hashCode();
}

bool BasicTextUI$BasicHighlighter::equals(Object$* arg0) {
	return this->$DefaultHighlighter::equals(arg0);
}

$Object* BasicTextUI$BasicHighlighter::clone() {
	return this->$DefaultHighlighter::clone();
}

$String* BasicTextUI$BasicHighlighter::toString() {
	return this->$DefaultHighlighter::toString();
}

void BasicTextUI$BasicHighlighter::finalize() {
	this->$DefaultHighlighter::finalize();
}

void BasicTextUI$BasicHighlighter::init$() {
	$DefaultHighlighter::init$();
}

BasicTextUI$BasicHighlighter::BasicTextUI$BasicHighlighter() {
}

$Class* BasicTextUI$BasicHighlighter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicTextUI$BasicHighlighter, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTextUI$BasicHighlighter", "javax.swing.plaf.basic.BasicTextUI", "BasicHighlighter", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextUI$BasicHighlighter",
		"javax.swing.text.DefaultHighlighter",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTextUI"
	};
	$loadClass(BasicTextUI$BasicHighlighter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextUI$BasicHighlighter));
	});
	return class$;
}

$Class* BasicTextUI$BasicHighlighter::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax