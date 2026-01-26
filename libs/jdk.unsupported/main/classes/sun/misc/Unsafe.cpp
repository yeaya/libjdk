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

$CompoundAttribute _Unsafe_MethodAnnotations_addressSize1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_allocateInstance2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_allocateMemory3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_arrayBaseOffset4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_arrayIndexScale5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSwapInt6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSwapLong7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSwapObject8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_copyMemory9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_copyMemory10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$0[] = {
	{"since", 's', "15"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_ensureClassInitialized11[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$0},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_freeMemory12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_fullFence13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAddress14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddInt15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddLong16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetInt17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetLong18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetObject19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getBoolean20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getBooleanVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByte22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByte23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByteVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getChar25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getChar26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getCharVolatile27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDouble28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDouble29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDoubleVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloat31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloat32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloatVolatile33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getInt34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getInt35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getIntVolatile36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLoadAverage37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLong38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLong39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLongVolatile40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getObject41[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getObjectVolatile42[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShort43[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShort44[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShortVolatile45[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getUnsafe46[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_loadFence48[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_objectFieldOffset49[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_pageSize50[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_park51[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putAddress52[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putBoolean53[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putBooleanVolatile54[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByte55[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByte56[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByteVolatile57[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putChar58[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putChar59[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putCharVolatile60[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDouble61[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDouble62[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDoubleVolatile63[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloat64[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloat65[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloatVolatile66[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putInt67[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putInt68[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putIntVolatile69[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLong70[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLong71[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLongVolatile72[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putObject73[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putObjectVolatile74[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putOrderedInt75[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putOrderedLong76[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putOrderedObject77[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShort78[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShort79[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShortVolatile80[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_reallocateMemory81[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_setMemory82[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_setMemory83[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$1[] = {
	{"since", 's', "15"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_shouldBeInitialized84[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$1},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_staticFieldBase85[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_staticFieldOffset86[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_storeFence87[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_throwException88[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_unpark89[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _Unsafe_FieldInfo_[] = {
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

$MethodInfo _Unsafe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Unsafe, init$, void)},
	{"addressSize", "()I", nullptr, $PUBLIC, $method(Unsafe, addressSize, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_addressSize1},
	{"allocateInstance", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC, $method(Unsafe, allocateInstance, $Object*, $Class*), "java.lang.InstantiationException", nullptr, _Unsafe_MethodAnnotations_allocateInstance2},
	{"allocateMemory", "(J)J", nullptr, $PUBLIC, $method(Unsafe, allocateMemory, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_allocateMemory3},
	{"arrayBaseOffset", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(Unsafe, arrayBaseOffset, int32_t, $Class*), nullptr, nullptr, _Unsafe_MethodAnnotations_arrayBaseOffset4},
	{"arrayIndexScale", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(Unsafe, arrayIndexScale, int32_t, $Class*), nullptr, nullptr, _Unsafe_MethodAnnotations_arrayIndexScale5},
	{"compareAndSwapInt", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSwapInt, bool, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSwapInt6},
	{"compareAndSwapLong", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSwapLong, bool, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSwapLong7},
	{"compareAndSwapObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSwapObject, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSwapObject8},
	{"copyMemory", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, copyMemory, void, Object$*, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_copyMemory9},
	{"copyMemory", "(JJJ)V", nullptr, $PUBLIC, $method(Unsafe, copyMemory, void, int64_t, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_copyMemory10},
	{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $DEPRECATED, $method(Unsafe, ensureClassInitialized, void, $Class*), nullptr, nullptr, _Unsafe_MethodAnnotations_ensureClassInitialized11},
	{"freeMemory", "(J)V", nullptr, $PUBLIC, $method(Unsafe, freeMemory, void, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_freeMemory12},
	{"fullFence", "()V", nullptr, $PUBLIC, $method(Unsafe, fullFence, void), nullptr, nullptr, _Unsafe_MethodAnnotations_fullFence13},
	{"getAddress", "(J)J", nullptr, $PUBLIC, $method(Unsafe, getAddress, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getAddress14},
	{"getAndAddInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddInt15},
	{"getAndAddLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddLong16},
	{"getAndSetInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetInt17},
	{"getAndSetLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetLong18},
	{"getAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetObject, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetObject19},
	{"getBoolean", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC, $method(Unsafe, getBoolean, bool, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getBoolean20},
	{"getBooleanVolatile", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC, $method(Unsafe, getBooleanVolatile, bool, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getBooleanVolatile21},
	{"getByte", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC, $method(Unsafe, getByte, int8_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getByte22},
	{"getByte", "(J)B", nullptr, $PUBLIC, $method(Unsafe, getByte, int8_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getByte23},
	{"getByteVolatile", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC, $method(Unsafe, getByteVolatile, int8_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getByteVolatile24},
	{"getChar", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC, $method(Unsafe, getChar, char16_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getChar25},
	{"getChar", "(J)C", nullptr, $PUBLIC, $method(Unsafe, getChar, char16_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getChar26},
	{"getCharVolatile", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC, $method(Unsafe, getCharVolatile, char16_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getCharVolatile27},
	{"getDouble", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC, $method(Unsafe, getDouble, double, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getDouble28},
	{"getDouble", "(J)D", nullptr, $PUBLIC, $method(Unsafe, getDouble, double, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getDouble29},
	{"getDoubleVolatile", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC, $method(Unsafe, getDoubleVolatile, double, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getDoubleVolatile30},
	{"getFloat", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC, $method(Unsafe, getFloat, float, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloat31},
	{"getFloat", "(J)F", nullptr, $PUBLIC, $method(Unsafe, getFloat, float, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloat32},
	{"getFloatVolatile", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC, $method(Unsafe, getFloatVolatile, float, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloatVolatile33},
	{"getInt", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC, $method(Unsafe, getInt, int32_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getInt34},
	{"getInt", "(J)I", nullptr, $PUBLIC, $method(Unsafe, getInt, int32_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getInt35},
	{"getIntVolatile", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC, $method(Unsafe, getIntVolatile, int32_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getIntVolatile36},
	{"getLoadAverage", "([DI)I", nullptr, $PUBLIC, $method(Unsafe, getLoadAverage, int32_t, $doubles*, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getLoadAverage37},
	{"getLong", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC, $method(Unsafe, getLong, int64_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getLong38},
	{"getLong", "(J)J", nullptr, $PUBLIC, $method(Unsafe, getLong, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getLong39},
	{"getLongVolatile", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC, $method(Unsafe, getLongVolatile, int64_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getLongVolatile40},
	{"getObject", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC, $method(Unsafe, getObject, $Object*, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getObject41},
	{"getObjectVolatile", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC, $method(Unsafe, getObjectVolatile, $Object*, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getObjectVolatile42},
	{"getShort", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC, $method(Unsafe, getShort, int16_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getShort43},
	{"getShort", "(J)S", nullptr, $PUBLIC, $method(Unsafe, getShort, int16_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getShort44},
	{"getShortVolatile", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC, $method(Unsafe, getShortVolatile, int16_t, Object$*, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_getShortVolatile45},
	{"getUnsafe", "()Lsun/misc/Unsafe;", nullptr, $PUBLIC | $STATIC, $staticMethod(Unsafe, getUnsafe, Unsafe*), nullptr, nullptr, _Unsafe_MethodAnnotations_getUnsafe46},
	{"invokeCleaner", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(Unsafe, invokeCleaner, void, $ByteBuffer*)},
	{"loadFence", "()V", nullptr, $PUBLIC, $method(Unsafe, loadFence, void), nullptr, nullptr, _Unsafe_MethodAnnotations_loadFence48},
	{"objectFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(Unsafe, objectFieldOffset, int64_t, $Field*), nullptr, nullptr, _Unsafe_MethodAnnotations_objectFieldOffset49},
	{"pageSize", "()I", nullptr, $PUBLIC, $method(Unsafe, pageSize, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_pageSize50},
	{"park", "(ZJ)V", nullptr, $PUBLIC, $method(Unsafe, park, void, bool, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_park51},
	{"putAddress", "(JJ)V", nullptr, $PUBLIC, $method(Unsafe, putAddress, void, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putAddress52},
	{"putBoolean", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC, $method(Unsafe, putBoolean, void, Object$*, int64_t, bool), nullptr, nullptr, _Unsafe_MethodAnnotations_putBoolean53},
	{"putBooleanVolatile", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC, $method(Unsafe, putBooleanVolatile, void, Object$*, int64_t, bool), nullptr, nullptr, _Unsafe_MethodAnnotations_putBooleanVolatile54},
	{"putByte", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $method(Unsafe, putByte, void, Object$*, int64_t, int8_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putByte55},
	{"putByte", "(JB)V", nullptr, $PUBLIC, $method(Unsafe, putByte, void, int64_t, int8_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putByte56},
	{"putByteVolatile", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $method(Unsafe, putByteVolatile, void, Object$*, int64_t, int8_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putByteVolatile57},
	{"putChar", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $method(Unsafe, putChar, void, Object$*, int64_t, char16_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putChar58},
	{"putChar", "(JC)V", nullptr, $PUBLIC, $method(Unsafe, putChar, void, int64_t, char16_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putChar59},
	{"putCharVolatile", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $method(Unsafe, putCharVolatile, void, Object$*, int64_t, char16_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putCharVolatile60},
	{"putDouble", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $method(Unsafe, putDouble, void, Object$*, int64_t, double), nullptr, nullptr, _Unsafe_MethodAnnotations_putDouble61},
	{"putDouble", "(JD)V", nullptr, $PUBLIC, $method(Unsafe, putDouble, void, int64_t, double), nullptr, nullptr, _Unsafe_MethodAnnotations_putDouble62},
	{"putDoubleVolatile", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $method(Unsafe, putDoubleVolatile, void, Object$*, int64_t, double), nullptr, nullptr, _Unsafe_MethodAnnotations_putDoubleVolatile63},
	{"putFloat", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $method(Unsafe, putFloat, void, Object$*, int64_t, float), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloat64},
	{"putFloat", "(JF)V", nullptr, $PUBLIC, $method(Unsafe, putFloat, void, int64_t, float), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloat65},
	{"putFloatVolatile", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $method(Unsafe, putFloatVolatile, void, Object$*, int64_t, float), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloatVolatile66},
	{"putInt", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $method(Unsafe, putInt, void, Object$*, int64_t, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putInt67},
	{"putInt", "(JI)V", nullptr, $PUBLIC, $method(Unsafe, putInt, void, int64_t, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putInt68},
	{"putIntVolatile", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $method(Unsafe, putIntVolatile, void, Object$*, int64_t, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putIntVolatile69},
	{"putLong", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, putLong, void, Object$*, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putLong70},
	{"putLong", "(JJ)V", nullptr, $PUBLIC, $method(Unsafe, putLong, void, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putLong71},
	{"putLongVolatile", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, putLongVolatile, void, Object$*, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putLongVolatile72},
	{"putObject", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, putObject, void, Object$*, int64_t, Object$*), nullptr, nullptr, _Unsafe_MethodAnnotations_putObject73},
	{"putObjectVolatile", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, putObjectVolatile, void, Object$*, int64_t, Object$*), nullptr, nullptr, _Unsafe_MethodAnnotations_putObjectVolatile74},
	{"putOrderedInt", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $method(Unsafe, putOrderedInt, void, Object$*, int64_t, int32_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putOrderedInt75},
	{"putOrderedLong", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, putOrderedLong, void, Object$*, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putOrderedLong76},
	{"putOrderedObject", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, putOrderedObject, void, Object$*, int64_t, Object$*), nullptr, nullptr, _Unsafe_MethodAnnotations_putOrderedObject77},
	{"putShort", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $method(Unsafe, putShort, void, Object$*, int64_t, int16_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putShort78},
	{"putShort", "(JS)V", nullptr, $PUBLIC, $method(Unsafe, putShort, void, int64_t, int16_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putShort79},
	{"putShortVolatile", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $method(Unsafe, putShortVolatile, void, Object$*, int64_t, int16_t), nullptr, nullptr, _Unsafe_MethodAnnotations_putShortVolatile80},
	{"reallocateMemory", "(JJ)J", nullptr, $PUBLIC, $method(Unsafe, reallocateMemory, int64_t, int64_t, int64_t), nullptr, nullptr, _Unsafe_MethodAnnotations_reallocateMemory81},
	{"setMemory", "(Ljava/lang/Object;JJB)V", nullptr, $PUBLIC, $method(Unsafe, setMemory, void, Object$*, int64_t, int64_t, int8_t), nullptr, nullptr, _Unsafe_MethodAnnotations_setMemory82},
	{"setMemory", "(JJB)V", nullptr, $PUBLIC, $method(Unsafe, setMemory, void, int64_t, int64_t, int8_t), nullptr, nullptr, _Unsafe_MethodAnnotations_setMemory83},
	{"shouldBeInitialized", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $DEPRECATED, $method(Unsafe, shouldBeInitialized, bool, $Class*), nullptr, nullptr, _Unsafe_MethodAnnotations_shouldBeInitialized84},
	{"staticFieldBase", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(Unsafe, staticFieldBase, $Object*, $Field*), nullptr, nullptr, _Unsafe_MethodAnnotations_staticFieldBase85},
	{"staticFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(Unsafe, staticFieldOffset, int64_t, $Field*), nullptr, nullptr, _Unsafe_MethodAnnotations_staticFieldOffset86},
	{"storeFence", "()V", nullptr, $PUBLIC, $method(Unsafe, storeFence, void), nullptr, nullptr, _Unsafe_MethodAnnotations_storeFence87},
	{"throwException", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Unsafe, throwException, void, $Throwable*), nullptr, nullptr, _Unsafe_MethodAnnotations_throwException88},
	{"unpark", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Unsafe, unpark, void, Object$*), nullptr, nullptr, _Unsafe_MethodAnnotations_unpark89},
	{}
};

$ClassInfo _Unsafe_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.misc.Unsafe",
	"java.lang.Object",
	nullptr,
	_Unsafe_FieldInfo_,
	_Unsafe_MethodInfo_
};

$Object* allocate$Unsafe($Class* clazz) {
	return $of($alloc(Unsafe));
}

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
	return $of($nc(Unsafe::theInternalUnsafe)->getReference(o, offset));
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
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* declaringClass = $nc(f)->getDeclaringClass();
	if ($nc(declaringClass)->isHidden()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a hidden class: "_s, f}));
	}
	if ($nc(declaringClass)->isRecord()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a record class: "_s, f}));
	}
	return $nc(Unsafe::theInternalUnsafe)->objectFieldOffset(f);
}

int64_t Unsafe::staticFieldOffset($Field* f) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* declaringClass = $nc(f)->getDeclaringClass();
	if ($nc(declaringClass)->isHidden()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a hidden class: "_s, f}));
	}
	if ($nc(declaringClass)->isRecord()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get field offset on a record class: "_s, f}));
	}
	return $nc(Unsafe::theInternalUnsafe)->staticFieldOffset(f);
}

$Object* Unsafe::staticFieldBase($Field* f) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* declaringClass = $nc(f)->getDeclaringClass();
	if ($nc(declaringClass)->isHidden()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get base address on a hidden class: "_s, f}));
	}
	if ($nc(declaringClass)->isRecord()) {
		$throwNew($UnsupportedOperationException, $$str({"can\'t get base address on a record class: "_s, f}));
	}
	return $of($nc(Unsafe::theInternalUnsafe)->staticFieldBase(f));
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
	return $of($nc(Unsafe::theInternalUnsafe)->allocateInstance(cls));
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
	return $of($nc(Unsafe::theInternalUnsafe)->getReferenceVolatile(o, offset));
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
	return $of($nc(Unsafe::theInternalUnsafe)->getAndSetReference(o, offset, newValue));
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

void clinit$Unsafe($Class* class$) {
	{
		$Reflection::registerMethodsToFilter(Unsafe::class$, $($Set::of($of("getUnsafe"_s))));
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
	$loadClass(Unsafe, name, initialize, &_Unsafe_ClassInfo_, clinit$Unsafe, allocate$Unsafe);
	return class$;
}

$Class* Unsafe::class$ = nullptr;

	} // misc
} // sun