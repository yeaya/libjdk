#include <com/sun/jndi/toolkit/dir/AttrFilter.h>

#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$MethodInfo _AttrFilter_MethodInfo_[] = {
	{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttrFilter, check, bool, $Attributes*), "javax.naming.NamingException"},
	{}
};

$ClassInfo _AttrFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jndi.toolkit.dir.AttrFilter",
	nullptr,
	nullptr,
	nullptr,
	_AttrFilter_MethodInfo_
};

$Object* allocate$AttrFilter($Class* clazz) {
	return $of($alloc(AttrFilter));
}

$Class* AttrFilter::load$($String* name, bool initialize) {
	$loadClass(AttrFilter, name, initialize, &_AttrFilter_ClassInfo_, allocate$AttrFilter);
	return class$;
}

$Class* AttrFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com