#ifndef _sun_datatransfer_DataFlavorUtil$RMI_h_
#define _sun_datatransfer_DataFlavorUtil$RMI_h_
//$ class sun.datatransfer.DataFlavorUtil$RMI
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}

namespace sun {
	namespace datatransfer {

class $export DataFlavorUtil$RMI : public ::java::lang::Object {
	$class(DataFlavorUtil$RMI, 0, ::java::lang::Object)
public:
	DataFlavorUtil$RMI();
	void init$();
	static $Class* getClass($String* name);
	static ::java::lang::reflect::Constructor* getConstructor($Class* c, $ClassArray* types);
	static $Object* getMarshalledObject(Object$* obj);
	static ::java::lang::reflect::Method* getMethod($Class* c, $String* name, $ClassArray* types);
	static bool isRemote($Class* c);
	static $Object* newMarshalledObject(Object$* obj);
	static $Class* remoteClass();
	static $Class* remoteClass$;
	static $Class* marshallObjectClass;
	static ::java::lang::reflect::Constructor* marshallCtor;
	static ::java::lang::reflect::Method* marshallGet;
};

	} // datatransfer
} // sun

#endif // _sun_datatransfer_DataFlavorUtil$RMI_h_