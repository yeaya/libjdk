#ifndef _jdk_net_NetworkPermission_h_
#define _jdk_net_NetworkPermission_h_
//$ class jdk.net.NetworkPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace jdk {
	namespace net {

class $export NetworkPermission : public ::java::security::BasicPermission {
	$class(NetworkPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	NetworkPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0xe4109a1c581a700d;
};

	} // net
} // jdk

#endif // _jdk_net_NetworkPermission_h_