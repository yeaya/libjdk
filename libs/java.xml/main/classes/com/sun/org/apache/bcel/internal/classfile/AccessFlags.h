#ifndef _com_sun_org_apache_bcel_internal_classfile_AccessFlags_h_
#define _com_sun_org_apache_bcel_internal_classfile_AccessFlags_h_
//$ class com.sun.org.apache.bcel.internal.classfile.AccessFlags
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class AccessFlags : public ::java::lang::Object {
	$class(AccessFlags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessFlags();
	void init$();
	void init$(int32_t a);
	int32_t getAccessFlags();
	int32_t getModifiers();
	void isAbstract(bool flag);
	bool isAbstract();
	void isAnnotation(bool flag);
	bool isAnnotation();
	void isEnum(bool flag);
	bool isEnum();
	void isFinal(bool flag);
	bool isFinal();
	void isInterface(bool flag);
	bool isInterface();
	void isNative(bool flag);
	bool isNative();
	void isPrivate(bool flag);
	bool isPrivate();
	void isProtected(bool flag);
	bool isProtected();
	void isPublic(bool flag);
	bool isPublic();
	void isStatic(bool flag);
	bool isStatic();
	void isStrictfp(bool flag);
	bool isStrictfp();
	void isSynchronized(bool flag);
	bool isSynchronized();
	void isSynthetic(bool flag);
	bool isSynthetic();
	void isTransient(bool flag);
	bool isTransient();
	void isVarArgs(bool flag);
	bool isVarArgs();
	void isVolatile(bool flag);
	bool isVolatile();
	void setAccessFlags(int32_t access_flags);
	void setFlag(int32_t flag, bool set);
	void setModifiers(int32_t access_flags);
	int32_t access_flags = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_AccessFlags_h_