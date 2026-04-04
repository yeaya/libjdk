#include <javax/naming/directory/AttributeModificationException.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/ModificationItem.h>
#include <jcpp.h>

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void AttributeModificationException::init$($String* explanation) {
	$NamingException::init$(explanation);
	$set(this, unexecs, nullptr);
}

void AttributeModificationException::init$() {
	$NamingException::init$();
	$set(this, unexecs, nullptr);
}

void AttributeModificationException::setUnexecutedModifications($ModificationItemArray* e) {
	$set(this, unexecs, e);
}

$ModificationItemArray* AttributeModificationException::getUnexecutedModifications() {
	return this->unexecs;
}

$String* AttributeModificationException::toString() {
	$useLocalObjectStack();
	$var($String, orig, $NamingException::toString());
	if (this->unexecs != nullptr) {
		$plusAssign(orig, ($$str({"First unexecuted modification: "_s, $($nc(this->unexecs->get(0))->toString())})));
	}
	return orig;
}

AttributeModificationException::AttributeModificationException() {
}

AttributeModificationException::AttributeModificationException(const AttributeModificationException& e) : $NamingException(e) {
}

void AttributeModificationException::throw$() {
	throw *this;
}

$Class* AttributeModificationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unexecs", "[Ljavax/naming/directory/ModificationItem;", nullptr, $PRIVATE, $field(AttributeModificationException, unexecs)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeModificationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttributeModificationException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AttributeModificationException, init$, void)},
		{"getUnexecutedModifications", "()[Ljavax/naming/directory/ModificationItem;", nullptr, $PUBLIC, $virtualMethod(AttributeModificationException, getUnexecutedModifications, $ModificationItemArray*)},
		{"setUnexecutedModifications", "([Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, $virtualMethod(AttributeModificationException, setUnexecutedModifications, void, $ModificationItemArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeModificationException, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.AttributeModificationException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AttributeModificationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeModificationException);
	});
	return class$;
}

$Class* AttributeModificationException::class$ = nullptr;

		} // directory
	} // naming
} // javax