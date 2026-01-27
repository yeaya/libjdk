#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <jcpp.h>

#undef ACC_ABSTRACT
#undef ACC_ANNOTATION
#undef ACC_ENUM
#undef ACC_FINAL
#undef ACC_INTERFACE
#undef ACC_NATIVE
#undef ACC_PRIVATE
#undef ACC_PROTECTED
#undef ACC_PUBLIC
#undef ACC_STATIC
#undef ACC_STRICT
#undef ACC_SYNCHRONIZED
#undef ACC_SYNTHETIC
#undef ACC_TRANSIENT
#undef ACC_VARARGS
#undef ACC_VOLATILE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _AccessFlags_FieldInfo_[] = {
	{"access_flags", "I", nullptr, $PRIVATE, $field(AccessFlags, access_flags)},
	{}
};

$MethodInfo _AccessFlags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AccessFlags, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(AccessFlags, init$, void, int32_t)},
	{"getAccessFlags", "()I", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, getAccessFlags, int32_t)},
	{"getModifiers", "()I", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, getModifiers, int32_t)},
	{"isAbstract", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isAbstract, void, bool)},
	{"isAbstract", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isAbstract, bool)},
	{"isAnnotation", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isAnnotation, void, bool)},
	{"isAnnotation", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isAnnotation, bool)},
	{"isEnum", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isEnum, void, bool)},
	{"isEnum", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isEnum, bool)},
	{"isFinal", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isFinal, void, bool)},
	{"isFinal", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isFinal, bool)},
	{"isInterface", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isInterface, void, bool)},
	{"isInterface", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isInterface, bool)},
	{"isNative", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isNative, void, bool)},
	{"isNative", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isNative, bool)},
	{"isPrivate", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isPrivate, void, bool)},
	{"isPrivate", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isPrivate, bool)},
	{"isProtected", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isProtected, void, bool)},
	{"isProtected", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isProtected, bool)},
	{"isPublic", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isPublic, void, bool)},
	{"isPublic", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isPublic, bool)},
	{"isStatic", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isStatic, void, bool)},
	{"isStatic", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isStatic, bool)},
	{"isStrictfp", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isStrictfp, void, bool)},
	{"isStrictfp", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isStrictfp, bool)},
	{"isSynchronized", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isSynchronized, void, bool)},
	{"isSynchronized", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isSynchronized, bool)},
	{"isSynthetic", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isSynthetic, void, bool)},
	{"isSynthetic", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isSynthetic, bool)},
	{"isTransient", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isTransient, void, bool)},
	{"isTransient", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isTransient, bool)},
	{"isVarArgs", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isVarArgs, void, bool)},
	{"isVarArgs", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isVarArgs, bool)},
	{"isVolatile", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isVolatile, void, bool)},
	{"isVolatile", "()Z", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, isVolatile, bool)},
	{"setAccessFlags", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, setAccessFlags, void, int32_t)},
	{"setFlag", "(IZ)V", nullptr, $PRIVATE, $method(AccessFlags, setFlag, void, int32_t, bool)},
	{"setModifiers", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AccessFlags, setModifiers, void, int32_t)},
	{}
};

$ClassInfo _AccessFlags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.AccessFlags",
	"java.lang.Object",
	nullptr,
	_AccessFlags_FieldInfo_,
	_AccessFlags_MethodInfo_
};

$Object* allocate$AccessFlags($Class* clazz) {
	return $of($alloc(AccessFlags));
}

void AccessFlags::init$() {
}

void AccessFlags::init$(int32_t a) {
	this->access_flags = a;
}

int32_t AccessFlags::getAccessFlags() {
	return this->access_flags;
}

int32_t AccessFlags::getModifiers() {
	return this->access_flags;
}

void AccessFlags::setAccessFlags(int32_t access_flags) {
	this->access_flags = access_flags;
}

void AccessFlags::setModifiers(int32_t access_flags) {
	setAccessFlags(access_flags);
}

void AccessFlags::setFlag(int32_t flag, bool set) {
	if (((int32_t)(this->access_flags & (uint32_t)flag)) != 0) {
		if (!set) {
			this->access_flags ^= flag;
		}
	} else if (set) {
		this->access_flags |= flag;
	}
}

void AccessFlags::isPublic(bool flag) {
	setFlag($Const::ACC_PUBLIC, flag);
}

bool AccessFlags::isPublic() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_PUBLIC)) != 0;
}

void AccessFlags::isPrivate(bool flag) {
	setFlag($Const::ACC_PRIVATE, flag);
}

bool AccessFlags::isPrivate() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_PRIVATE)) != 0;
}

void AccessFlags::isProtected(bool flag) {
	setFlag($Const::ACC_PROTECTED, flag);
}

bool AccessFlags::isProtected() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_PROTECTED)) != 0;
}

void AccessFlags::isStatic(bool flag) {
	setFlag($Const::ACC_STATIC, flag);
}

bool AccessFlags::isStatic() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_STATIC)) != 0;
}

void AccessFlags::isFinal(bool flag) {
	setFlag($Const::ACC_FINAL, flag);
}

bool AccessFlags::isFinal() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_FINAL)) != 0;
}

void AccessFlags::isSynchronized(bool flag) {
	setFlag($Const::ACC_SYNCHRONIZED, flag);
}

bool AccessFlags::isSynchronized() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_SYNCHRONIZED)) != 0;
}

void AccessFlags::isVolatile(bool flag) {
	setFlag($Const::ACC_VOLATILE, flag);
}

bool AccessFlags::isVolatile() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_VOLATILE)) != 0;
}

void AccessFlags::isTransient(bool flag) {
	setFlag($Const::ACC_TRANSIENT, flag);
}

bool AccessFlags::isTransient() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_TRANSIENT)) != 0;
}

void AccessFlags::isNative(bool flag) {
	setFlag($Const::ACC_NATIVE, flag);
}

bool AccessFlags::isNative() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_NATIVE)) != 0;
}

void AccessFlags::isInterface(bool flag) {
	setFlag($Const::ACC_INTERFACE, flag);
}

bool AccessFlags::isInterface() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_INTERFACE)) != 0;
}

void AccessFlags::isAbstract(bool flag) {
	setFlag($Const::ACC_ABSTRACT, flag);
}

bool AccessFlags::isAbstract() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_ABSTRACT)) != 0;
}

void AccessFlags::isStrictfp(bool flag) {
	setFlag($Const::ACC_STRICT, flag);
}

bool AccessFlags::isStrictfp() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_STRICT)) != 0;
}

void AccessFlags::isSynthetic(bool flag) {
	setFlag($Const::ACC_SYNTHETIC, flag);
}

bool AccessFlags::isSynthetic() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_SYNTHETIC)) != 0;
}

void AccessFlags::isAnnotation(bool flag) {
	setFlag($Const::ACC_ANNOTATION, flag);
}

bool AccessFlags::isAnnotation() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_ANNOTATION)) != 0;
}

void AccessFlags::isEnum(bool flag) {
	setFlag($Const::ACC_ENUM, flag);
}

bool AccessFlags::isEnum() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_ENUM)) != 0;
}

void AccessFlags::isVarArgs(bool flag) {
	setFlag($Const::ACC_VARARGS, flag);
}

bool AccessFlags::isVarArgs() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_VARARGS)) != 0;
}

AccessFlags::AccessFlags() {
}

$Class* AccessFlags::load$($String* name, bool initialize) {
	$loadClass(AccessFlags, name, initialize, &_AccessFlags_ClassInfo_, allocate$AccessFlags);
	return class$;
}

$Class* AccessFlags::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com