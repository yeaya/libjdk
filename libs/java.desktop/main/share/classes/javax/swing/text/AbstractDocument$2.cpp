#include <javax/swing/text/AbstractDocument$2.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <jcpp.h>

#undef INSERT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;

namespace javax {
	namespace swing {
		namespace text {

void AbstractDocument$2::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
}

void AbstractDocument$2::validateObject() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		this->this$0->writeLock();
		$init($DocumentEvent$EventType);
		$var($AbstractDocument$DefaultDocumentEvent, e, $new($AbstractDocument$DefaultDocumentEvent, this->this$0, 0, this->this$0->getLength(), $DocumentEvent$EventType::INSERT));
		this->this$0->updateBidi(e);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->this$0->writeUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

AbstractDocument$2::AbstractDocument$2() {
}

$Class* AbstractDocument$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, 0, $method(AbstractDocument$2, init$, void, $AbstractDocument*)},
		{"validateObject", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$2, validateObject, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.AbstractDocument",
		"readObject",
		"(Ljava/io/ObjectInputStream;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.AbstractDocument$2",
		"java.lang.Object",
		"java.io.ObjectInputValidation",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AbstractDocument"
	};
	$loadClass(AbstractDocument$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocument$2);
	});
	return class$;
}

$Class* AbstractDocument$2::class$ = nullptr;

		} // text
	} // swing
} // javax