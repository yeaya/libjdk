#ifndef _javax_management_QueryEval_h_
#define _javax_management_QueryEval_h_
//$ class javax.management.QueryEval
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
	}
}

namespace javax {
	namespace management {

class $export QueryEval : public ::java::io::Serializable {
	$class(QueryEval, 0, ::java::io::Serializable)
public:
	QueryEval();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	static ::javax::management::MBeanServer* getMBeanServer();
	virtual void setMBeanServer(::javax::management::MBeanServer* s);
	static const int64_t serialVersionUID = (int64_t)0x2522b4345f40c32c;
	static ::java::lang::ThreadLocal* server;
};

	} // management
} // javax

#endif // _javax_management_QueryEval_h_