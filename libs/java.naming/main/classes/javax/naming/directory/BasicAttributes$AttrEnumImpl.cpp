#include <javax/naming/directory/BasicAttributes$AttrEnumImpl.h>
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

void BasicAttributes$AttrEnumImpl::init$($BasicAttributes* this$0) {
	$set(this, this$0, this$0);
	$set(this, elements, $nc(this$0->attrs)->elements());
}

bool BasicAttributes$AttrEnumImpl::hasMoreElements() {
	return $nc(this->elements)->hasMoreElements();
}

$Object* BasicAttributes$AttrEnumImpl::nextElement() {
	return $of($cast($Attribute, $nc(this->elements)->nextElement()));
}

bool BasicAttributes$AttrEnumImpl::hasMore() {
	return hasMoreElements();
}

$Object* BasicAttributes$AttrEnumImpl::next() {
	return nextElement();
}

void BasicAttributes$AttrEnumImpl::close() {
	$set(this, elements, nullptr);
}

BasicAttributes$AttrEnumImpl::BasicAttributes$AttrEnumImpl() {
}

$Class* BasicAttributes$AttrEnumImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/naming/directory/BasicAttributes;", nullptr, $FINAL | $SYNTHETIC, $field(BasicAttributes$AttrEnumImpl, this$0)},
		{"elements", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/naming/directory/Attribute;>;", 0, $field(BasicAttributes$AttrEnumImpl, elements)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/directory/BasicAttributes;)V", nullptr, $PUBLIC, $method(BasicAttributes$AttrEnumImpl, init$, void, $BasicAttributes*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$AttrEnumImpl, close, void), "javax.naming.NamingException"},
		{"hasMore", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$AttrEnumImpl, hasMore, bool), "javax.naming.NamingException"},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$AttrEnumImpl, hasMoreElements, bool)},
		{"next", "()Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$AttrEnumImpl, next, $Object*), "javax.naming.NamingException"},
		{"nextElement", "()Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC, $virtualMethod(BasicAttributes$AttrEnumImpl, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.naming.directory.BasicAttributes$AttrEnumImpl", "javax.naming.directory.BasicAttributes", "AttrEnumImpl", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.naming.directory.BasicAttributes$AttrEnumImpl",
		"java.lang.Object",
		"javax.naming.NamingEnumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/Attribute;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.naming.directory.BasicAttributes"
	};
	$loadClass(BasicAttributes$AttrEnumImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicAttributes$AttrEnumImpl);
	});
	return class$;
}

$Class* BasicAttributes$AttrEnumImpl::class$ = nullptr;

		} // directory
	} // naming
} // javax