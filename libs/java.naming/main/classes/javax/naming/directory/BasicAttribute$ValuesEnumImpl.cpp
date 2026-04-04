#include <javax/naming/directory/BasicAttribute$ValuesEnumImpl.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;

namespace javax {
	namespace naming {
		namespace directory {

void BasicAttribute$ValuesEnumImpl::init$($BasicAttribute* this$0) {
	$set(this, this$0, this$0);
	$set(this, list, $nc(this$0->values)->elements());
}

bool BasicAttribute$ValuesEnumImpl::hasMoreElements() {
	return $nc(this->list)->hasMoreElements();
}

$Object* BasicAttribute$ValuesEnumImpl::nextElement() {
	return ($nc(this->list)->nextElement());
}

$Object* BasicAttribute$ValuesEnumImpl::next() {
	return $nc(this->list)->nextElement();
}

bool BasicAttribute$ValuesEnumImpl::hasMore() {
	return $nc(this->list)->hasMoreElements();
}

void BasicAttribute$ValuesEnumImpl::close() {
	$set(this, list, nullptr);
}

BasicAttribute$ValuesEnumImpl::BasicAttribute$ValuesEnumImpl() {
}

$Class* BasicAttribute$ValuesEnumImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/naming/directory/BasicAttribute;", nullptr, $FINAL | $SYNTHETIC, $field(BasicAttribute$ValuesEnumImpl, this$0)},
		{"list", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/Object;>;", 0, $field(BasicAttribute$ValuesEnumImpl, list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/directory/BasicAttribute;)V", nullptr, 0, $method(BasicAttribute$ValuesEnumImpl, init$, void, $BasicAttribute*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(BasicAttribute$ValuesEnumImpl, close, void), "javax.naming.NamingException"},
		{"hasMore", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicAttribute$ValuesEnumImpl, hasMore, bool), "javax.naming.NamingException"},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicAttribute$ValuesEnumImpl, hasMoreElements, bool)},
		{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicAttribute$ValuesEnumImpl, next, $Object*), "javax.naming.NamingException"},
		{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicAttribute$ValuesEnumImpl, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.naming.directory.BasicAttribute$ValuesEnumImpl", "javax.naming.directory.BasicAttribute", "ValuesEnumImpl", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.naming.directory.BasicAttribute$ValuesEnumImpl",
		"java.lang.Object",
		"javax.naming.NamingEnumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.naming.directory.BasicAttribute"
	};
	$loadClass(BasicAttribute$ValuesEnumImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicAttribute$ValuesEnumImpl);
	});
	return class$;
}

$Class* BasicAttribute$ValuesEnumImpl::class$ = nullptr;

		} // directory
	} // naming
} // javax