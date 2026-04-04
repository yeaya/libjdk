#include <sun/misc/Unsafe.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Field.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

#undef ADDRESS_SIZE
#undef ARRAY_BOOLEAN_BASE_OFFSET
#undef ARRAY_BOOLEAN_INDEX_SCALE
#undef ARRAY_BYTE_BASE_OFFSET
#undef ARRAY_BYTE_INDEX_SCALE
#undef ARRAY_CHAR_BASE_OFFSET
#undef ARRAY_CHAR_INDEX_SCALE
#undef ARRAY_DOUBLE_BASE_OFFSET
#undef ARRAY_DOUBLE_INDEX_SCALE
#undef ARRAY_FLOAT_BASE_OFFSET
#undef ARRAY_FLOAT_INDEX_SCALE
#undef ARRAY_INT_BASE_OFFSET
#undef ARRAY_INT_INDEX_SCALE
#undef ARRAY_LONG_BASE_OFFSET
#undef ARRAY_LONG_INDEX_SCALE
#undef ARRAY_OBJECT_BASE_OFFSET
#undef ARRAY_OBJECT_INDEX_SCALE
#undef ARRAY_SHORT_BASE_OFFSET
#undef ARRAY_SHORT_INDEX_SCALE
#undef INVALID_FIELD_OFFSET

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Field = ::java::lang::reflect::Field;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Set = ::java::util::Set;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $VM = ::jdk::internal::misc::VM;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace sun {
	namespace misc {

Unsafe* Unsafe::theUnsafe = nullptr;
$Unsafe* Unsafe::theInternalUnsafe = nullptr;
int32_t Unsafe::ARRAY_BOOLEAN_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_BYTE_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_SHORT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_CHAR_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_INT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_LONG_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_FLOAT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_DOUBLE_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_OBJECT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_BOOLEAN_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_BYTE_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_SHORT_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_CHAR_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_INT_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_LONG_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_FLOAT_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_DOUBLE_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_OBJECT_INDEX_SCALE = 0;
int32_t Unsafe::ADDRESS_SIZE = 0;

void Unsafe::init$() {
}

Unsafe* Unsafe::getUnsafe() {
	$init(Unsafe);
	$Class* caller = $Reflection::getCallerClass();
	if (!$VM::isSystemDomainLoader($($nc(caller)->getClassLoader()))) {
		$throwNew($SecurityException, "Unsafe"_s);
	}
	return Unsafe::theUnsafe;
}

int32_t Unsafe::getInt(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getInt(o, offset);
}

void Unsafe::putInt(Object$* o, int64_t offset, int32_t x) {
	$nc(Unsafe::theInternalUnsafe)->putInt(o, offset, x);
}

$Object* Unsafe::getObject(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getReference(o, offset);
}

void Unsafe::putObject(Object$* o, int64_t offset, Object$* x) {
	$nc(Unsafe::theInternalUnsafe)->putReference(o, offset, x);
}

bool Unsafe::getBoolean(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getBoolean(o, offset);
}

void Unsafe::putBoolean(Object$* o, int64_t offset, bool x) {
	$nc(Unsafe::theInternalUnsafe)->putBoolean(o, offset, x);
}

int8_t Unsafe::getByte(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getByte(o, offset);
}

void Unsafe::putByte(Object$* o, int64_t offset, int8_t x) {
	$nc(Unsafe::theInternalUnsafe)->putByte(o, offset, x);
}

int16_t Unsafe::getShort(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getShort(o, offset);
}

void Unsafe::putShort(Object$* o, int64_t offset, int16_t x) {
	$nc(Unsafe::theInternalUnsafe)->putShort(o, offset, x);
}

char16_t Unsafe::getChar(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getChar(o, offset);
}

void Unsafe::putChar(Object$* o, int64_t offset, char16_t x) {
	$nc(Unsafe::theInternalUnsafe)->putChar(o, offset, x);
}

int64_t Unsafe::getLong(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getLong(o, offset);
}

void Unsafe::putLong(Object$* o, int64_t offset, int64_t x) {
	$nc(Unsafe::theInternalUnsafe)->putLong(o, offset, x);
}

float Unsafe::getFloat(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getFloat(o, offset);
}

void Unsafe::putFloat(Object$* o, int64_t offset, float x) {
	$nc(Unsafe::theInternalUnsafe)->putFloat(o, offset, x);
}

double Unsafe::getDouble(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getDouble(o, offset);
}

void Unsafe::putDouble(Object$* o, int64_t offset, double x) {
	$nc(Unsafe::theInternalUnsafe)->putDouble(o, offset, x);
}

int8_t Unsafe::getByte(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getByte(address);
}

void Unsafe::putByte(int64_t address, int8_t x) {
	$nc(Unsafe::theInternalUnsafe)->putByte(address, x);
}

int16_t Unsafe::getShort(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getShort(address);
}

void Unsafe::putShort(int64_t address, int16_t x) {
	$nc(Unsafe::theInternalUnsafe)->putShort(address, x);
}

char16_t Unsafe::getChar(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getChar(address);
}

void Unsafe::putChar(int64_t address, char16_t x) {
	$nc(Unsafe::theInternalUnsafe)->putChar(address, x);
}

int32_t Unsafe::getInt(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getInt(address);
}

void Unsafe::putInt(int64_t address, int32_t x) {
	$nc(Unsafe::theInternalUnsafe)->putInt(address, x);
}

int64_t Unsafe::getLong(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getLong(address);
}

void Unsafe::putLong(int64_t address, int64_t x) {
	$nc(Unsafe::theInternalUnsafe)->putLong(address, x);
}

float Unsafe::getFloat(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getFloat(address);
}

void Unsafe::putFloat(int64_t address, float x) {
	$nc(Unsafe::theInternalUnsafe)->putFloat(address, x);
}

double Unsafe::getDouble(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getDouble(address);
}

void Unsafe::putDouble(int64_t address, double x) {
	$nc(Unsafe::theInternalUnsafe)->putDouble(address, x);
}

int64_t Unsafe::getAddress(int64_t address) {
	return $nc(Unsafe::theInternalUnsafe)->getAddress(address);
}

void Unsafe::putAddress(int64_t address, int64_t x) {
	$nc(Unsafe::theInternalUnsafe)->putAddress(address, x);
}

int64_t Unsafe::allocateMemory(int64_t bytes) {
	return $nc(Unsafe::theInternalUnsafe)->allocateMemory(bytes);
}

int64_t Unsafe::reallocateMemory(int64_t address, int64_t bytes) {
	return $nc(Unsafe::theInternalUnsafe)->reallocateMemory(address, bytes);
}

void Unsafe::setMemory(Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	$nc(Unsafe::theInternalUnsafe)->setMemory(o, offset, bytes, value);
}

void Unsafe::setMemory(int64_t address, int64_t bytes, int8_t value) {
	$nc(Unsafe::theInternalUnsafe)->setMemory(address, bytes, value);
}

void Unsafe::copyMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	$nc(Unsafe::theInternalUnsafe)->copyMemory(srcBase, srcOffset, destBase, destOffset, bytes);
}

void Unsafe::copyMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes) {
	$nc(Unsafe::theInternalUnsafe)->copyMemory(srcAddress, destAddress, bytes);
}

void Unsafe::freeMemory(int64_t address) {
	$nc(Unsafe::theInternalUnsafe)->freeMemory(address);
}

int64_t Unsafe::objectFieldOffset($Field* f) {
	$useLocalObjectStack();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* declaringClass = $nc(f)->getDeclaringClass();
	if ($nc(declaringClass)->isHidden()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a hidden class: "_s, f}));
	}
	if (declaringClass->isRecord()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a record class: "_s, f}));
	}
	return $nc(Unsafe::theInternalUnsafe)->objectFieldOffset(f);
}

int64_t Unsafe::staticFieldOffset($Field* f) {
	$useLocalObjectStack();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* declaringClass = $nc(f)->getDeclaringClass();
	if ($nc(declaringClass)->isHidden()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a hidden class: "_s, f}));
	}
	if (declaringClass->isRecord()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a record class: "_s, f}));
	}
	return $nc(Unsafe::theInternalUnsafe)->staticFieldOffset(f);
}

$Object* Unsafe::staticFieldBase($Field* f) {
	$useLocalObjectStack();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* declaringClass = $nc(f)->getDeclaringClass();
	if ($nc(declaringClass)->isHidden()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get base address on a hidden class: "_s, f}));
	}
	if (declaringClass->isRecord()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get base address on a record class: "_s, f}));
	}
	return $nc(Unsafe::theInternalUnsafe)->staticFieldBase(f);
}

bool Unsafe::shouldBeInitialized($Class* c) {
	return $nc(Unsafe::theInternalUnsafe)->shouldBeInitialized(c);
}

void Unsafe::ensureClassInitialized($Class* c) {
	$nc(Unsafe::theInternalUnsafe)->ensureClassInitialized(c);
}

int32_t Unsafe::arrayBaseOffset($Class* arrayClass) {
	return $nc(Unsafe::theInternalUnsafe)->arrayBaseOffset(arrayClass);
}

int32_t Unsafe::arrayIndexScale($Class* arrayClass) {
	return $nc(Unsafe::theInternalUnsafe)->arrayIndexScale(arrayClass);
}

int32_t Unsafe::addressSize() {
	return $nc(Unsafe::theInternalUnsafe)->addressSize();
}

int32_t Unsafe::pageSize() {
	return $nc(Unsafe::theInternalUnsafe)->pageSize();
}

$Object* Unsafe::allocateInstance($Class* cls) {
	return $nc(Unsafe::theInternalUnsafe)->allocateInstance(cls);
}

void Unsafe::throwException($Throwable* ee) {
	$nc(Unsafe::theInternalUnsafe)->throwException(ee);
}

bool Unsafe::compareAndSwapObject(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return $nc(Unsafe::theInternalUnsafe)->compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::compareAndSwapInt(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return $nc(Unsafe::theInternalUnsafe)->compareAndSetInt(o, offset, expected, x);
}

bool Unsafe::compareAndSwapLong(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return $nc(Unsafe::theInternalUnsafe)->compareAndSetLong(o, offset, expected, x);
}

$Object* Unsafe::getObjectVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getReferenceVolatile(o, offset);
}

void Unsafe::putObjectVolatile(Object$* o, int64_t offset, Object$* x) {
	$nc(Unsafe::theInternalUnsafe)->putReferenceVolatile(o, offset, x);
}

int32_t Unsafe::getIntVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getIntVolatile(o, offset);
}

void Unsafe::putIntVolatile(Object$* o, int64_t offset, int32_t x) {
	$nc(Unsafe::theInternalUnsafe)->putIntVolatile(o, offset, x);
}

bool Unsafe::getBooleanVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getBooleanVolatile(o, offset);
}

void Unsafe::putBooleanVolatile(Object$* o, int64_t offset, bool x) {
	$nc(Unsafe::theInternalUnsafe)->putBooleanVolatile(o, offset, x);
}

int8_t Unsafe::getByteVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getByteVolatile(o, offset);
}

void Unsafe::putByteVolatile(Object$* o, int64_t offset, int8_t x) {
	$nc(Unsafe::theInternalUnsafe)->putByteVolatile(o, offset, x);
}

int16_t Unsafe::getShortVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getShortVolatile(o, offset);
}

void Unsafe::putShortVolatile(Object$* o, int64_t offset, int16_t x) {
	$nc(Unsafe::theInternalUnsafe)->putShortVolatile(o, offset, x);
}

char16_t Unsafe::getCharVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getCharVolatile(o, offset);
}

void Unsafe::putCharVolatile(Object$* o, int64_t offset, char16_t x) {
	$nc(Unsafe::theInternalUnsafe)->putCharVolatile(o, offset, x);
}

int64_t Unsafe::getLongVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getLongVolatile(o, offset);
}

void Unsafe::putLongVolatile(Object$* o, int64_t offset, int64_t x) {
	$nc(Unsafe::theInternalUnsafe)->putLongVolatile(o, offset, x);
}

float Unsafe::getFloatVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getFloatVolatile(o, offset);
}

void Unsafe::putFloatVolatile(Object$* o, int64_t offset, float x) {
	$nc(Unsafe::theInternalUnsafe)->putFloatVolatile(o, offset, x);
}

double Unsafe::getDoubleVolatile(Object$* o, int64_t offset) {
	return $nc(Unsafe::theInternalUnsafe)->getDoubleVolatile(o, offset);
}

void Unsafe::putDoubleVolatile(Object$* o, int64_t offset, double x) {
	$nc(Unsafe::theInternalUnsafe)->putDoubleVolatile(o, offset, x);
}

void Unsafe::putOrderedObject(Object$* o, int64_t offset, Object$* x) {
	$nc(Unsafe::theInternalUnsafe)->putReferenceRelease(o, offset, x);
}

void Unsafe::putOrderedInt(Object$* o, int64_t offset, int32_t x) {
	$nc(Unsafe::theInternalUnsafe)->putIntRelease(o, offset, x);
}

void Unsafe::putOrderedLong(Object$* o, int64_t offset, int64_t x) {
	$nc(Unsafe::theInternalUnsafe)->putLongRelease(o, offset, x);
}

void Unsafe::unpark(Object$* thread) {
	$nc(Unsafe::theInternalUnsafe)->unpark(thread);
}

void Unsafe::park(bool isAbsolute, int64_t time) {
	$nc(Unsafe::theInternalUnsafe)->park(isAbsolute, time);
}

int32_t Unsafe::getLoadAverage($doubles* loadavg, int32_t nelems) {
	return $nc(Unsafe::theInternalUnsafe)->getLoadAverage(loadavg, nelems);
}

int32_t Unsafe::getAndAddInt(Object$* o, int64_t offset, int32_t delta) {
	return $nc(Unsafe::theInternalUnsafe)->getAndAddInt(o, offset, delta);
}

int64_t Unsafe::getAndAddLong(Object$* o, int64_t offset, int64_t delta) {
	return $nc(Unsafe::theInternalUnsafe)->getAndAddLong(o, offset, delta);
}

int32_t Unsafe::getAndSetInt(Object$* o, int64_t offset, int32_t newValue) {
	return $nc(Unsafe::theInternalUnsafe)->getAndSetInt(o, offset, newValue);
}

int64_t Unsafe::getAndSetLong(Object$* o, int64_t offset, int64_t newValue) {
	return $nc(Unsafe::theInternalUnsafe)->getAndSetLong(o, offset, newValue);
}

$Object* Unsafe::getAndSetObject(Object$* o, int64_t offset, Object$* newValue) {
	return $nc(Unsafe::theInternalUnsafe)->getAndSetReference(o, offset, newValue);
}

void Unsafe::loadFence() {
	$nc(Unsafe::theInternalUnsafe)->loadFence();
}

void Unsafe::storeFence() {
	$nc(Unsafe::theInternalUnsafe)->storeFence();
}

void Unsafe::fullFence() {
	$nc(Unsafe::theInternalUnsafe)->fullFence();
}

void Unsafe::invokeCleaner($ByteBuffer* directBuffer) {
	if (!$nc(directBuffer)->isDirect()) {
		$throwNew($IllegalArgumentException, "buffer is non-direct"_s);
	}
	$nc(Unsafe::theInternalUnsafe)->invokeCleaner(directBuffer);
}

void Unsafe::clinit$($Class* clazz) {
	{
		$Reflection::registerMethodsToFilter(Unsafe::class$, $($Set::of("getUnsafe"_s)));
	}
	$assignStatic(Unsafe::theUnsafe, $new(Unsafe));
	$assignStatic(Unsafe::theInternalUnsafe, $Unsafe::getUnsafe());
	Unsafe::ARRAY_BOOLEAN_BASE_OFFSET = $Unsafe::ARRAY_BOOLEAN_BASE_OFFSET;
	Unsafe::ARRAY_BYTE_BASE_OFFSET = $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	Unsafe::ARRAY_SHORT_BASE_OFFSET = $Unsafe::ARRAY_SHORT_BASE_OFFSET;
	Unsafe::ARRAY_CHAR_BASE_OFFSET = $Unsafe::ARRAY_CHAR_BASE_OFFSET;
	Unsafe::ARRAY_INT_BASE_OFFSET = $Unsafe::ARRAY_INT_BASE_OFFSET;
	Unsafe::ARRAY_LONG_BASE_OFFSET = $Unsafe::ARRAY_LONG_BASE_OFFSET;
	Unsafe::ARRAY_FLOAT_BASE_OFFSET = $Unsafe::ARRAY_FLOAT_BASE_OFFSET;
	Unsafe::ARRAY_DOUBLE_BASE_OFFSET = $Unsafe::ARRAY_DOUBLE_BASE_OFFSET;
	Unsafe::ARRAY_OBJECT_BASE_OFFSET = $Unsafe::ARRAY_OBJECT_BASE_OFFSET;
	Unsafe::ARRAY_BOOLEAN_INDEX_SCALE = $Unsafe::ARRAY_BOOLEAN_INDEX_SCALE;
	Unsafe::ARRAY_BYTE_INDEX_SCALE = $Unsafe::ARRAY_BYTE_INDEX_SCALE;
	Unsafe::ARRAY_SHORT_INDEX_SCALE = $Unsafe::ARRAY_SHORT_INDEX_SCALE;
	Unsafe::ARRAY_CHAR_INDEX_SCALE = $Unsafe::ARRAY_CHAR_INDEX_SCALE;
	Unsafe::ARRAY_INT_INDEX_SCALE = $Unsafe::ARRAY_INT_INDEX_SCALE;
	Unsafe::ARRAY_LONG_INDEX_SCALE = $Unsafe::ARRAY_LONG_INDEX_SCALE;
	Unsafe::ARRAY_FLOAT_INDEX_SCALE = $Unsafe::ARRAY_FLOAT_INDEX_SCALE;
	Unsafe::ARRAY_DOUBLE_INDEX_SCALE = $Unsafe::ARRAY_DOUBLE_INDEX_SCALE;
	Unsafe::ARRAY_OBJECT_INDEX_SCALE = $Unsafe::ARRAY_OBJECT_INDEX_SCALE;
	Unsafe::ADDRESS_SIZE = $nc(Unsafe::theInternalUnsafe)->addressSize();
}

Unsafe::Unsafe() {
}

$Class* Unsafe::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theUnsafe", "Lsun/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Unsafe, theUnsafe)},
		{"theInternalUnsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Unsafe, theInternalUnsafe)},
		{"INVALID_FIELD_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Unsafe, INVALID_FIELD_OFFSET)},
		{"ARRAY_BOOLEAN_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BOOLEAN_BASE_OFFSET)},
		{"ARRAY_BYTE_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BYTE_BASE_OFFSET)},
		{"ARRAY_SHORT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_SHORT_BASE_OFFSET)},
		{"ARRAY_CHAR_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_CHAR_BASE_OFFSET)},
		{"ARRAY_INT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_INT_BASE_OFFSET)},
		{"ARRAY_LONG_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_LONG_BASE_OFFSET)},
		{"ARRAY_FLOAT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_FLOAT_BASE_OFFSET)},
		{"ARRAY_DOUBLE_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_DOUBLE_BASE_OFFSET)},
		{"ARRAY_OBJECT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_OBJECT_BASE_OFFSET)},
		{"ARRAY_BOOLEAN_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BOOLEAN_INDEX_SCALE)},
		{"ARRAY_BYTE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BYTE_INDEX_SCALE)},
		{"ARRAY_SHORT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_SHORT_INDEX_SCALE)},
		{"ARRAY_CHAR_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_CHAR_INDEX_SCALE)},
		{"ARRAY_INT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_INT_INDEX_SCALE)},
		{"ARRAY_LONG_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_LONG_INDEX_SCALE)},
		{"ARRAY_FLOAT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_FLOAT_INDEX_SCALE)},
		{"ARRAY_DOUBLE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_DOUBLE_INDEX_SCALE)},
		{"ARRAY_OBJECT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_OBJECT_INDEX_SCALE)},
		{"ADDRESS_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ADDRESS_SIZE)},
		{}
	};
	$CompoundAttribute addressSizemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute allocateInstancemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute allocateMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute arrayBaseOffsetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute arrayIndexScalemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSwapIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSwapLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSwapObjectmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute copyMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute copyMemorymethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$NamedAttribute ensureClassInitializedmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "15"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute ensureClassInitializedmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", ensureClassInitializedmethodAnnotations$$$namedAttribute},
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute freeMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute fullFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAddressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetObjectmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getBooleanVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getBytemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getByteVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoublemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLoadAveragemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getObjectmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getObjectVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getUnsafemethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$CompoundAttribute loadFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute objectFieldOffsetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute pageSizemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute parkmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putAddressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putBooleanVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putBytemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putByteVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoublemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putObjectmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putObjectVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putOrderedIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putOrderedLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putOrderedObjectmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute reallocateMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setMemorymethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$NamedAttribute shouldBeInitializedmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "15"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute shouldBeInitializedmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", shouldBeInitializedmethodAnnotations$$$namedAttribute},
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute staticFieldBasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute staticFieldOffsetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute storeFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute throwExceptionmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute unparkmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Unsafe, init$, void)},
		{"addressSize", "()I", nullptr, $PUBLIC, $method(Unsafe, addressSize, int32_t), nullptr, nullptr, addressSizemethodAnnotations$$},
		{"allocateInstance", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC, $method(Unsafe, allocateInstance, $Object*, $Class*), "java.lang.InstantiationException", nullptr, allocateInstancemethodAnnotations$$},
		{"allocateMemory", "(J)J", nullptr, $PUBLIC, $method(Unsafe, allocateMemory, int64_t, int64_t), nullptr, nullptr, allocateMemorymethodAnnotations$$},
		{"arrayBaseOffset", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(Unsafe, arrayBaseOffset, int32_t, $Class*), nullptr, nullptr, arrayBaseOffsetmethodAnnotations$$},
		{"arrayIndexScale", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(Unsafe, arrayIndexScale, int32_t, $Class*), nullptr, nullptr, arrayIndexScalemethodAnnotations$$},
		{"compareAndSwapInt", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSwapInt, bool, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndSwapIntmethodAnnotations$$},
		{"compareAndSwapLong", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSwapLong, bool, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndSwapLongmethodAnnotations$$},
		{"compareAndSwapObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSwapObject, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndSwapObjectmethodAnnotations$$},
		{"copyMemory", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, copyMemory, void, Object$*, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, copyMemorymethodAnnotations$$},
		{"copyMemory", "(JJJ)V", nullptr, $PUBLIC, $method(Unsafe, copyMemory, void, int64_t, int64_t, int64_t), nullptr, nullptr, copyMemorymethodAnnotations$$$1},
		{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $DEPRECATED, $method(Unsafe, ensureClassInitialized, void, $Class*), nullptr, nullptr, ensureClassInitializedmethodAnnotations$$},
		{"freeMemory", "(J)V", nullptr, $PUBLIC, $method(Unsafe, freeMemory, void, int64_t), nullptr, nullptr, freeMemorymethodAnnotations$$},
		{"fullFence", "()V", nullptr, $PUBLIC, $method(Unsafe, fullFence, void), nullptr, nullptr, fullFencemethodAnnotations$$},
		{"getAddress", "(J)J", nullptr, $PUBLIC, $method(Unsafe, getAddress, int64_t, int64_t), nullptr, nullptr, getAddressmethodAnnotations$$},
		{"getAndAddInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntmethodAnnotations$$},
		{"getAndAddLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongmethodAnnotations$$},
		{"getAndSetInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntmethodAnnotations$$},
		{"getAndSetLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongmethodAnnotations$$},
		{"getAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetObject, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, getAndSetObjectmethodAnnotations$$},
		{"getBoolean", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC, $method(Unsafe, getBoolean, bool, Object$*, int64_t), nullptr, nullptr, getBooleanmethodAnnotations$$},
		{"getBooleanVolatile", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC, $method(Unsafe, getBooleanVolatile, bool, Object$*, int64_t), nullptr, nullptr, getBooleanVolatilemethodAnnotations$$},
		{"getByte", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC, $method(Unsafe, getByte, int8_t, Object$*, int64_t), nullptr, nullptr, getBytemethodAnnotations$$},
		{"getByte", "(J)B", nullptr, $PUBLIC, $method(Unsafe, getByte, int8_t, int64_t), nullptr, nullptr, getBytemethodAnnotations$$$1},
		{"getByteVolatile", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC, $method(Unsafe, getByteVolatile, int8_t, Object$*, int64_t), nullptr, nullptr, getByteVolatilemethodAnnotations$$},
		{"getChar", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC, $method(Unsafe, getChar, char16_t, Object$*, int64_t), nullptr, nullptr, getCharmethodAnnotations$$},
		{"getChar", "(J)C", nullptr, $PUBLIC, $method(Unsafe, getChar, char16_t, int64_t), nullptr, nullptr, getCharmethodAnnotations$$$1},
		{"getCharVolatile", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC, $method(Unsafe, getCharVolatile, char16_t, Object$*, int64_t), nullptr, nullptr, getCharVolatilemethodAnnotations$$},
		{"getDouble", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC, $method(Unsafe, getDouble, double, Object$*, int64_t), nullptr, nullptr, getDoublemethodAnnotations$$},
		{"getDouble", "(J)D", nullptr, $PUBLIC, $method(Unsafe, getDouble, double, int64_t), nullptr, nullptr, getDoublemethodAnnotations$$$1},
		{"getDoubleVolatile", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC, $method(Unsafe, getDoubleVolatile, double, Object$*, int64_t), nullptr, nullptr, getDoubleVolatilemethodAnnotations$$},
		{"getFloat", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC, $method(Unsafe, getFloat, float, Object$*, int64_t), nullptr, nullptr, getFloatmethodAnnotations$$},
		{"getFloat", "(J)F", nullptr, $PUBLIC, $method(Unsafe, getFloat, float, int64_t), nullptr, nullptr, getFloatmethodAnnotations$$$1},
		{"getFloatVolatile", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC, $method(Unsafe, getFloatVolatile, float, Object$*, int64_t), nullptr, nullptr, getFloatVolatilemethodAnnotations$$},
		{"getInt", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC, $method(Unsafe, getInt, int32_t, Object$*, int64_t), nullptr, nullptr, getIntmethodAnnotations$$},
		{"getInt", "(J)I", nullptr, $PUBLIC, $method(Unsafe, getInt, int32_t, int64_t), nullptr, nullptr, getIntmethodAnnotations$$$1},
		{"getIntVolatile", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC, $method(Unsafe, getIntVolatile, int32_t, Object$*, int64_t), nullptr, nullptr, getIntVolatilemethodAnnotations$$},
		{"getLoadAverage", "([DI)I", nullptr, $PUBLIC, $method(Unsafe, getLoadAverage, int32_t, $doubles*, int32_t), nullptr, nullptr, getLoadAveragemethodAnnotations$$},
		{"getLong", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC, $method(Unsafe, getLong, int64_t, Object$*, int64_t), nullptr, nullptr, getLongmethodAnnotations$$},
		{"getLong", "(J)J", nullptr, $PUBLIC, $method(Unsafe, getLong, int64_t, int64_t), nullptr, nullptr, getLongmethodAnnotations$$$1},
		{"getLongVolatile", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC, $method(Unsafe, getLongVolatile, int64_t, Object$*, int64_t), nullptr, nullptr, getLongVolatilemethodAnnotations$$},
		{"getObject", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC, $method(Unsafe, getObject, $Object*, Object$*, int64_t), nullptr, nullptr, getObjectmethodAnnotations$$},
		{"getObjectVolatile", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC, $method(Unsafe, getObjectVolatile, $Object*, Object$*, int64_t), nullptr, nullptr, getObjectVolatilemethodAnnotations$$},
		{"getShort", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC, $method(Unsafe, getShort, int16_t, Object$*, int64_t), nullptr, nullptr, getShortmethodAnnotations$$},
		{"getShort", "(J)S", nullptr, $PUBLIC, $method(Unsafe, getShort, int16_t, int64_t), nullptr, nullptr, getShortmethodAnnotations$$$1},
		{"getShortVolatile", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC, $method(Unsafe, getShortVolatile, int16_t, Object$*, int64_t), nullptr, nullptr, getShortVolatilemethodAnnotations$$},
		{"getUnsafe", "()Lsun/misc/Unsafe;", nullptr, $PUBLIC | $STATIC, $staticMethod(Unsafe, getUnsafe, Unsafe*), nullptr, nullptr, getUnsafemethodAnnotations$$},
		{"invokeCleaner", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(Unsafe, invokeCleaner, void, $ByteBuffer*)},
		{"loadFence", "()V", nullptr, $PUBLIC, $method(Unsafe, loadFence, void), nullptr, nullptr, loadFencemethodAnnotations$$},
		{"objectFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(Unsafe, objectFieldOffset, int64_t, $Field*), nullptr, nullptr, objectFieldOffsetmethodAnnotations$$},
		{"pageSize", "()I", nullptr, $PUBLIC, $method(Unsafe, pageSize, int32_t), nullptr, nullptr, pageSizemethodAnnotations$$},
		{"park", "(ZJ)V", nullptr, $PUBLIC, $method(Unsafe, park, void, bool, int64_t), nullptr, nullptr, parkmethodAnnotations$$},
		{"putAddress", "(JJ)V", nullptr, $PUBLIC, $method(Unsafe, putAddress, void, int64_t, int64_t), nullptr, nullptr, putAddressmethodAnnotations$$},
		{"putBoolean", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC, $method(Unsafe, putBoolean, void, Object$*, int64_t, bool), nullptr, nullptr, putBooleanmethodAnnotations$$},
		{"putBooleanVolatile", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC, $method(Unsafe, putBooleanVolatile, void, Object$*, int64_t, bool), nullptr, nullptr, putBooleanVolatilemethodAnnotations$$},
		{"putByte", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $method(Unsafe, putByte, void, Object$*, int64_t, int8_t), nullptr, nullptr, putBytemethodAnnotations$$},
		{"putByte", "(JB)V", nullptr, $PUBLIC, $method(Unsafe, putByte, void, int64_t, int8_t), nullptr, nullptr, putBytemethodAnnotations$$$1},
		{"putByteVolatile", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $method(Unsafe, putByteVolatile, void, Object$*, int64_t, int8_t), nullptr, nullptr, putByteVolatilemethodAnnotations$$},
		{"putChar", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $method(Unsafe, putChar, void, Object$*, int64_t, char16_t), nullptr, nullptr, putCharmethodAnnotations$$},
		{"putChar", "(JC)V", nullptr, $PUBLIC, $method(Unsafe, putChar, void, int64_t, char16_t), nullptr, nullptr, putCharmethodAnnotations$$$1},
		{"putCharVolatile", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $method(Unsafe, putCharVolatile, void, Object$*, int64_t, char16_t), nullptr, nullptr, putCharVolatilemethodAnnotations$$},
		{"putDouble", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $method(Unsafe, putDouble, void, Object$*, int64_t, double), nullptr, nullptr, putDoublemethodAnnotations$$},
		{"putDouble", "(JD)V", nullptr, $PUBLIC, $method(Unsafe, putDouble, void, int64_t, double), nullptr, nullptr, putDoublemethodAnnotations$$$1},
		{"putDoubleVolatile", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $method(Unsafe, putDoubleVolatile, void, Object$*, int64_t, double), nullptr, nullptr, putDoubleVolatilemethodAnnotations$$},
		{"putFloat", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $method(Unsafe, putFloat, void, Object$*, int64_t, float), nullptr, nullptr, putFloatmethodAnnotations$$},
		{"putFloat", "(JF)V", nullptr, $PUBLIC, $method(Unsafe, putFloat, void, int64_t, float), nullptr, nullptr, putFloatmethodAnnotations$$$1},
		{"putFloatVolatile", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $method(Unsafe, putFloatVolatile, void, Object$*, int64_t, float), nullptr, nullptr, putFloatVolatilemethodAnnotations$$},
		{"putInt", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $method(Unsafe, putInt, void, Object$*, int64_t, int32_t), nullptr, nullptr, putIntmethodAnnotations$$},
		{"putInt", "(JI)V", nullptr, $PUBLIC, $method(Unsafe, putInt, void, int64_t, int32_t), nullptr, nullptr, putIntmethodAnnotations$$$1},
		{"putIntVolatile", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $method(Unsafe, putIntVolatile, void, Object$*, int64_t, int32_t), nullptr, nullptr, putIntVolatilemethodAnnotations$$},
		{"putLong", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, putLong, void, Object$*, int64_t, int64_t), nullptr, nullptr, putLongmethodAnnotations$$},
		{"putLong", "(JJ)V", nullptr, $PUBLIC, $method(Unsafe, putLong, void, int64_t, int64_t), nullptr, nullptr, putLongmethodAnnotations$$$1},
		{"putLongVolatile", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, putLongVolatile, void, Object$*, int64_t, int64_t), nullptr, nullptr, putLongVolatilemethodAnnotations$$},
		{"putObject", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, putObject, void, Object$*, int64_t, Object$*), nullptr, nullptr, putObjectmethodAnnotations$$},
		{"putObjectVolatile", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, putObjectVolatile, void, Object$*, int64_t, Object$*), nullptr, nullptr, putObjectVolatilemethodAnnotations$$},
		{"putOrderedInt", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $method(Unsafe, putOrderedInt, void, Object$*, int64_t, int32_t), nullptr, nullptr, putOrderedIntmethodAnnotations$$},
		{"putOrderedLong", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, putOrderedLong, void, Object$*, int64_t, int64_t), nullptr, nullptr, putOrderedLongmethodAnnotations$$},
		{"putOrderedObject", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, putOrderedObject, void, Object$*, int64_t, Object$*), nullptr, nullptr, putOrderedObjectmethodAnnotations$$},
		{"putShort", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $method(Unsafe, putShort, void, Object$*, int64_t, int16_t), nullptr, nullptr, putShortmethodAnnotations$$},
		{"putShort", "(JS)V", nullptr, $PUBLIC, $method(Unsafe, putShort, void, int64_t, int16_t), nullptr, nullptr, putShortmethodAnnotations$$$1},
		{"putShortVolatile", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $method(Unsafe, putShortVolatile, void, Object$*, int64_t, int16_t), nullptr, nullptr, putShortVolatilemethodAnnotations$$},
		{"reallocateMemory", "(JJ)J", nullptr, $PUBLIC, $method(Unsafe, reallocateMemory, int64_t, int64_t, int64_t), nullptr, nullptr, reallocateMemorymethodAnnotations$$},
		{"setMemory", "(Ljava/lang/Object;JJB)V", nullptr, $PUBLIC, $method(Unsafe, setMemory, void, Object$*, int64_t, int64_t, int8_t), nullptr, nullptr, setMemorymethodAnnotations$$},
		{"setMemory", "(JJB)V", nullptr, $PUBLIC, $method(Unsafe, setMemory, void, int64_t, int64_t, int8_t), nullptr, nullptr, setMemorymethodAnnotations$$$1},
		{"shouldBeInitialized", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $DEPRECATED, $method(Unsafe, shouldBeInitialized, bool, $Class*), nullptr, nullptr, shouldBeInitializedmethodAnnotations$$},
		{"staticFieldBase", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(Unsafe, staticFieldBase, $Object*, $Field*), nullptr, nullptr, staticFieldBasemethodAnnotations$$},
		{"staticFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(Unsafe, staticFieldOffset, int64_t, $Field*), nullptr, nullptr, staticFieldOffsetmethodAnnotations$$},
		{"storeFence", "()V", nullptr, $PUBLIC, $method(Unsafe, storeFence, void), nullptr, nullptr, storeFencemethodAnnotations$$},
		{"throwException", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Unsafe, throwException, void, $Throwable*), nullptr, nullptr, throwExceptionmethodAnnotations$$},
		{"unpark", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, unpark, void, Object$*), nullptr, nullptr, unparkmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.misc.Unsafe",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Unsafe, name, initialize, &classInfo$$, Unsafe::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Unsafe);
	});
	return class$;
}

$Class* Unsafe::class$ = nullptr;

	} // misc
} // sun