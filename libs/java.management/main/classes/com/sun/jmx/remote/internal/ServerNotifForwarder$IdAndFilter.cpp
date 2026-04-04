#include <com/sun/jmx/remote/internal/ServerNotifForwarder$IdAndFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <javax/management/NotificationFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ServerNotifForwarder$IdAndFilter::init$($Integer* id, $NotificationFilter* filter) {
	$set(this, id, id);
	$set(this, filter, filter);
}

$Integer* ServerNotifForwarder$IdAndFilter::getId() {
	return this->id;
}

$NotificationFilter* ServerNotifForwarder$IdAndFilter::getFilter() {
	return this->filter;
}

int32_t ServerNotifForwarder$IdAndFilter::hashCode() {
	return $nc(this->id)->hashCode();
}

bool ServerNotifForwarder$IdAndFilter::equals(Object$* o) {
	$useLocalObjectStack();
	return (($instanceOf(ServerNotifForwarder$IdAndFilter, o)) && $$nc($cast(ServerNotifForwarder$IdAndFilter, o)->getId())->equals($(getId())));
}

ServerNotifForwarder$IdAndFilter::ServerNotifForwarder$IdAndFilter() {
}

$Class* ServerNotifForwarder$IdAndFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"id", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(ServerNotifForwarder$IdAndFilter, id)},
		{"filter", "Ljavax/management/NotificationFilter;", nullptr, $PRIVATE, $field(ServerNotifForwarder$IdAndFilter, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Integer;Ljavax/management/NotificationFilter;)V", nullptr, 0, $method(ServerNotifForwarder$IdAndFilter, init$, void, $Integer*, $NotificationFilter*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ServerNotifForwarder$IdAndFilter, equals, bool, Object$*)},
		{"getFilter", "()Ljavax/management/NotificationFilter;", nullptr, 0, $virtualMethod(ServerNotifForwarder$IdAndFilter, getFilter, $NotificationFilter*)},
		{"getId", "()Ljava/lang/Integer;", nullptr, 0, $virtualMethod(ServerNotifForwarder$IdAndFilter, getId, $Integer*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ServerNotifForwarder$IdAndFilter, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ServerNotifForwarder$IdAndFilter", "com.sun.jmx.remote.internal.ServerNotifForwarder", "IdAndFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ServerNotifForwarder$IdAndFilter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ServerNotifForwarder"
	};
	$loadClass(ServerNotifForwarder$IdAndFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNotifForwarder$IdAndFilter);
	});
	return class$;
}

$Class* ServerNotifForwarder$IdAndFilter::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com