#include <javax/swing/tree/ExpandVetoException.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;

namespace javax {
	namespace swing {
		namespace tree {

void ExpandVetoException::init$($TreeExpansionEvent* event) {
	ExpandVetoException::init$(event, nullptr);
}

void ExpandVetoException::init$($TreeExpansionEvent* event, $String* message) {
	$Exception::init$(message);
	$set(this, event, event);
}

ExpandVetoException::ExpandVetoException() {
}

ExpandVetoException::ExpandVetoException(const ExpandVetoException& e) : $Exception(e) {
}

void ExpandVetoException::throw$() {
	throw *this;
}

$Class* ExpandVetoException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"event", "Ljavax/swing/event/TreeExpansionEvent;", nullptr, $PROTECTED, $field(ExpandVetoException, event)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC, $method(ExpandVetoException, init$, void, $TreeExpansionEvent*)},
		{"<init>", "(Ljavax/swing/event/TreeExpansionEvent;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ExpandVetoException, init$, void, $TreeExpansionEvent*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.tree.ExpandVetoException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExpandVetoException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpandVetoException);
	});
	return class$;
}

$Class* ExpandVetoException::class$ = nullptr;

		} // tree
	} // swing
} // javax