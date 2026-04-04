#include <javax/swing/plaf/basic/BasicColorChooserUI$ColorTransferHandler.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler = ::javax::swing::TransferHandler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicColorChooserUI$ColorTransferHandler::hashCode() {
	 return this->$TransferHandler::hashCode();
}

bool BasicColorChooserUI$ColorTransferHandler::equals(Object$* arg0) {
	 return this->$TransferHandler::equals(arg0);
}

$Object* BasicColorChooserUI$ColorTransferHandler::clone() {
	 return this->$TransferHandler::clone();
}

$String* BasicColorChooserUI$ColorTransferHandler::toString() {
	 return this->$TransferHandler::toString();
}

void BasicColorChooserUI$ColorTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicColorChooserUI$ColorTransferHandler::init$() {
	$TransferHandler::init$("color"_s);
}

BasicColorChooserUI$ColorTransferHandler::BasicColorChooserUI$ColorTransferHandler() {
}

$Class* BasicColorChooserUI$ColorTransferHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(BasicColorChooserUI$ColorTransferHandler, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicColorChooserUI$ColorTransferHandler", "javax.swing.plaf.basic.BasicColorChooserUI", "ColorTransferHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicColorChooserUI$ColorTransferHandler",
		"javax.swing.TransferHandler",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicColorChooserUI"
	};
	$loadClass(BasicColorChooserUI$ColorTransferHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicColorChooserUI$ColorTransferHandler));
	});
	return class$;
}

$Class* BasicColorChooserUI$ColorTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax