#include <javax/naming/directory/BasicAttributes$IDEnumImpl.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::naming::directory::Attribute;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;

namespace javax {
	namespace naming {
		namespace directory {

void BasicAttributes$IDEnumImpl::init$($BasicAttributes* this$0) {
	$set(this, this$0, this$0);
	$set(this, elements, $nc(this$0->attrs)->elements());
}

bool BasicAttributes$IDEnumImpl::hasMoreElements() {
	return $nc(this->elements)->hasMoreElements();
}

$Object* BasicAttributes$IDEnumImpl::nextElement() {
	$var($Attribute, attr, $cast($Attribute, $nc(this->elements)->nextElement()));
	return $of($nc(attr)->getID());
}

bool BasicAttributes$IDEnumImpl::hasMore() {
	return hasMoreElements();
}

$Object* BasicAttributes$IDEnumImpl::next() {
	return nextElement();
}

void BasicAttributes$IDEnumImpl::close() {
	$set(this, elements, nullptr);
}

BasicAttributes$IDEnumImpl::BasicAttributes$IDEnumImpl() {
}

$Class* BasicAttributes$IDEnumImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/naming/directory/BasicAttributes;", nullptr, $FINAL | $SYNTHETIC, $field(BasicAttributes$IDEnumImpl, this$0)},
		{"elements", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/naming/directory/Attribute;>;", 0, $field(BasicAttributes$IDEnumImpl, elements)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/directory/BasicAttributes;)V", nullptr, $PUBLIC, $method(BasicAttributes$IDEnumImpl, init$, void, $BasicAttributes*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$IDEnumImpl, close, void), "javax.naming.NamingException"},
		{"hasMore", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$IDEnumImpl, hasMore, bool), "javax.naming.NamingException"},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$IDEnumImpl, hasMoreElements, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$IDEnumImpl, next, $Object*), "javax.naming.NamingException"},
		{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$IDEnumImpl, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.naming.directory.BasicAttributes$IDEnumImpl", "javax.naming.directory.BasicAttributes", "IDEnumImpl", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.naming.directory.BasicAttributes$IDEnumImpl",
		"java.lang.Object",
		"javax.naming.NamingEnumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.naming.directory.BasicAttributes"
	};
	$loadClass(BasicAttributes$IDEnumImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicAttributes$IDEnumImpl);
	});
	return class$;
}

$Class* BasicAttributes$IDEnumImpl::class$ = nullptr;

		} // directory
	} // naming
} // javax