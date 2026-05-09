#include <javax/swing/plaf/basic/BasicTextUI$BasicCursor.h>
#include <java/awt/Cursor.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicTextUI$BasicCursor::toString() {
	return this->$Cursor::toString();
}

int32_t BasicTextUI$BasicCursor::hashCode() {
	return this->$Cursor::hashCode();
}

bool BasicTextUI$BasicCursor::equals(Object$* arg0) {
	return this->$Cursor::equals(arg0);
}

$Object* BasicTextUI$BasicCursor::clone() {
	return this->$Cursor::clone();
}

void BasicTextUI$BasicCursor::finalize() {
	this->$Cursor::finalize();
}

void BasicTextUI$BasicCursor::init$(int32_t type) {
	$Cursor::init$(type);
}

void BasicTextUI$BasicCursor::init$($String* name) {
	$Cursor::init$(name);
}

BasicTextUI$BasicCursor::BasicTextUI$BasicCursor() {
}

$Class* BasicTextUI$BasicCursor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(I)V", nullptr, 0, $method(BasicTextUI$BasicCursor, init$, void, int32_t)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BasicTextUI$BasicCursor, init$, void, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTextUI$BasicCursor", "javax.swing.plaf.basic.BasicTextUI", "BasicCursor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextUI$BasicCursor",
		"java.awt.Cursor",
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
	$loadClass(BasicTextUI$BasicCursor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextUI$BasicCursor));
	});
	return class$;
}

$Class* BasicTextUI$BasicCursor::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax