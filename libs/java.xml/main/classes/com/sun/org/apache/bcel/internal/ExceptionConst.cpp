#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>

#include <com/sun/org/apache/bcel/internal/ExceptionConst$1.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <java/lang/AbstractMethodError.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassCircularityError.h>
#include <java/lang/ClassFormatError.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/InstantiationError.h>
#include <java/lang/LinkageError.h>
#include <java/lang/NegativeArraySizeException.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <java/lang/VerifyError.h>
#include <jcpp.h>

#undef ABSTRACT_METHOD_ERROR
#undef ARITHMETIC_EXCEPTION
#undef ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION
#undef CLASS_CAST_EXCEPTION
#undef CLASS_CIRCULARITY_ERROR
#undef CLASS_FORMAT_ERROR
#undef EXCEPTION_IN_INITIALIZER_ERROR
#undef EXCS_ARRAY_EXCEPTION
#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef EXCS_INTERFACE_METHOD_RESOLUTION
#undef EXCS_STRING_RESOLUTION
#undef ILLEGAL_ACCESS_ERROR
#undef ILLEGAL_MONITOR_STATE
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR
#undef INSTANTIATION_ERROR
#undef LINKING_EXCEPTION
#undef NEGATIVE_ARRAY_SIZE_EXCEPTION
#undef NO_CLASS_DEF_FOUND_ERROR
#undef NO_SUCH_FIELD_ERROR
#undef NO_SUCH_METHOD_ERROR
#undef NULL_POINTER_EXCEPTION
#undef RUNTIME_EXCEPTION
#undef THROWABLE
#undef UNSATISFIED_LINK_ERROR
#undef VERIFY_ERROR

using $ExceptionConst$1 = ::com::sun::org::apache::bcel::internal::ExceptionConst$1;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $AbstractMethodError = ::java::lang::AbstractMethodError;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassCircularityError = ::java::lang::ClassCircularityError;
using $ClassFormatError = ::java::lang::ClassFormatError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationError = ::java::lang::InstantiationError;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NegativeArraySizeException = ::java::lang::NegativeArraySizeException;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;
using $VerifyError = ::java::lang::VerifyError;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {

$FieldInfo _ExceptionConst_FieldInfo_[] = {
	{"THROWABLE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Throwable;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, THROWABLE)},
	{"RUNTIME_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/RuntimeException;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, RUNTIME_EXCEPTION)},
	{"LINKING_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/LinkageError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, LINKING_EXCEPTION)},
	{"CLASS_CIRCULARITY_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/ClassCircularityError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, CLASS_CIRCULARITY_ERROR)},
	{"CLASS_FORMAT_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/ClassFormatError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, CLASS_FORMAT_ERROR)},
	{"EXCEPTION_IN_INITIALIZER_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/ExceptionInInitializerError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, EXCEPTION_IN_INITIALIZER_ERROR)},
	{"INCOMPATIBLE_CLASS_CHANGE_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/IncompatibleClassChangeError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, INCOMPATIBLE_CLASS_CHANGE_ERROR)},
	{"ABSTRACT_METHOD_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/AbstractMethodError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, ABSTRACT_METHOD_ERROR)},
	{"ILLEGAL_ACCESS_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/IllegalAccessError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, ILLEGAL_ACCESS_ERROR)},
	{"INSTANTIATION_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/InstantiationError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, INSTANTIATION_ERROR)},
	{"NO_SUCH_FIELD_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/NoSuchFieldError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, NO_SUCH_FIELD_ERROR)},
	{"NO_SUCH_METHOD_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/NoSuchMethodError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, NO_SUCH_METHOD_ERROR)},
	{"NO_CLASS_DEF_FOUND_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/NoClassDefFoundError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, NO_CLASS_DEF_FOUND_ERROR)},
	{"UNSATISFIED_LINK_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/UnsatisfiedLinkError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, UNSATISFIED_LINK_ERROR)},
	{"VERIFY_ERROR", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/VerifyError;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, VERIFY_ERROR)},
	{"NULL_POINTER_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/NullPointerException;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, NULL_POINTER_EXCEPTION)},
	{"ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION)},
	{"ARITHMETIC_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/ArithmeticException;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, ARITHMETIC_EXCEPTION)},
	{"NEGATIVE_ARRAY_SIZE_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/NegativeArraySizeException;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, NEGATIVE_ARRAY_SIZE_EXCEPTION)},
	{"CLASS_CAST_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/ClassCastException;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, CLASS_CAST_EXCEPTION)},
	{"ILLEGAL_MONITOR_STATE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/IllegalMonitorStateException;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExceptionConst, ILLEGAL_MONITOR_STATE)},
	{"EXCS_CLASS_AND_INTERFACE_RESOLUTION", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExceptionConst, EXCS_CLASS_AND_INTERFACE_RESOLUTION)},
	{"EXCS_FIELD_AND_METHOD_RESOLUTION", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExceptionConst, EXCS_FIELD_AND_METHOD_RESOLUTION)},
	{"EXCS_INTERFACE_METHOD_RESOLUTION", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExceptionConst, EXCS_INTERFACE_METHOD_RESOLUTION)},
	{"EXCS_STRING_RESOLUTION", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExceptionConst, EXCS_STRING_RESOLUTION)},
	{"EXCS_ARRAY_EXCEPTION", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExceptionConst, EXCS_ARRAY_EXCEPTION)},
	{}
};

$MethodInfo _ExceptionConst_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExceptionConst, init$, void)},
	{"createExceptions", "(Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;[Ljava/lang/Class;)[Ljava/lang/Class;", "(Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;[Ljava/lang/Class<*>;)[Ljava/lang/Class<*>;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ExceptionConst, createExceptions, $ClassArray*, $ExceptionConst$EXCS*, $ClassArray*)},
	{"mergeExceptions", "([Ljava/lang/Class;[Ljava/lang/Class;)[Ljava/lang/Class;", "([Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(ExceptionConst, mergeExceptions, $ClassArray*, $ClassArray*, $ClassArray*)},
	{}
};

$InnerClassInfo _ExceptionConst_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.ExceptionConst$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.org.apache.bcel.internal.ExceptionConst$EXCS", "com.sun.org.apache.bcel.internal.ExceptionConst", "EXCS", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ExceptionConst_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.ExceptionConst",
	"java.lang.Object",
	nullptr,
	_ExceptionConst_FieldInfo_,
	_ExceptionConst_MethodInfo_,
	nullptr,
	nullptr,
	_ExceptionConst_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.ExceptionConst$1,com.sun.org.apache.bcel.internal.ExceptionConst$EXCS"
};

$Object* allocate$ExceptionConst($Class* clazz) {
	return $of($alloc(ExceptionConst));
}

$Class* ExceptionConst::THROWABLE = nullptr;
$Class* ExceptionConst::RUNTIME_EXCEPTION = nullptr;
$Class* ExceptionConst::LINKING_EXCEPTION = nullptr;
$Class* ExceptionConst::CLASS_CIRCULARITY_ERROR = nullptr;
$Class* ExceptionConst::CLASS_FORMAT_ERROR = nullptr;
$Class* ExceptionConst::EXCEPTION_IN_INITIALIZER_ERROR = nullptr;
$Class* ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR = nullptr;
$Class* ExceptionConst::ABSTRACT_METHOD_ERROR = nullptr;
$Class* ExceptionConst::ILLEGAL_ACCESS_ERROR = nullptr;
$Class* ExceptionConst::INSTANTIATION_ERROR = nullptr;
$Class* ExceptionConst::NO_SUCH_FIELD_ERROR = nullptr;
$Class* ExceptionConst::NO_SUCH_METHOD_ERROR = nullptr;
$Class* ExceptionConst::NO_CLASS_DEF_FOUND_ERROR = nullptr;
$Class* ExceptionConst::UNSATISFIED_LINK_ERROR = nullptr;
$Class* ExceptionConst::VERIFY_ERROR = nullptr;
$Class* ExceptionConst::NULL_POINTER_EXCEPTION = nullptr;
$Class* ExceptionConst::ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION = nullptr;
$Class* ExceptionConst::ARITHMETIC_EXCEPTION = nullptr;
$Class* ExceptionConst::NEGATIVE_ARRAY_SIZE_EXCEPTION = nullptr;
$Class* ExceptionConst::CLASS_CAST_EXCEPTION = nullptr;
$Class* ExceptionConst::ILLEGAL_MONITOR_STATE = nullptr;
$ClassArray* ExceptionConst::EXCS_CLASS_AND_INTERFACE_RESOLUTION = nullptr;
$ClassArray* ExceptionConst::EXCS_FIELD_AND_METHOD_RESOLUTION = nullptr;
$ClassArray* ExceptionConst::EXCS_INTERFACE_METHOD_RESOLUTION = nullptr;
$ClassArray* ExceptionConst::EXCS_STRING_RESOLUTION = nullptr;
$ClassArray* ExceptionConst::EXCS_ARRAY_EXCEPTION = nullptr;

void ExceptionConst::init$() {
}

$ClassArray* ExceptionConst::mergeExceptions($ClassArray* input, $ClassArray* extraClasses) {
	$init(ExceptionConst);
	int32_t extraLen = extraClasses == nullptr ? 0 : $nc(extraClasses)->length;
	$var($ClassArray, excs, $new($ClassArray, $nc(input)->length + extraLen));
	$System::arraycopy(input, 0, excs, 0, input->length);
	if (extraLen > 0) {
		$System::arraycopy(extraClasses, 0, excs, input->length, extraLen);
	}
	return excs;
}

$ClassArray* ExceptionConst::createExceptions($ExceptionConst$EXCS* type, $ClassArray* extraClasses) {
	$init(ExceptionConst);
	$init($ExceptionConst$1);
	switch ($nc($ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS)->get((type)->ordinal())) {
	case 1:
		{
			return mergeExceptions(ExceptionConst::EXCS_CLASS_AND_INTERFACE_RESOLUTION, extraClasses);
		}
	case 2:
		{
			return mergeExceptions(ExceptionConst::EXCS_ARRAY_EXCEPTION, extraClasses);
		}
	case 3:
		{
			return mergeExceptions(ExceptionConst::EXCS_FIELD_AND_METHOD_RESOLUTION, extraClasses);
		}
	case 4:
		{
			return mergeExceptions(ExceptionConst::EXCS_INTERFACE_METHOD_RESOLUTION, extraClasses);
		}
	case 5:
		{
			return mergeExceptions(ExceptionConst::EXCS_STRING_RESOLUTION, extraClasses);
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Cannot happen; unexpected enum value: "_s, type})));
		}
	}
}

void clinit$ExceptionConst($Class* class$) {
	$assignStatic(ExceptionConst::THROWABLE, $Throwable::class$);
	$load($RuntimeException);
	$assignStatic(ExceptionConst::RUNTIME_EXCEPTION, $RuntimeException::class$);
	$load($LinkageError);
	$assignStatic(ExceptionConst::LINKING_EXCEPTION, $LinkageError::class$);
	$load($ClassCircularityError);
	$assignStatic(ExceptionConst::CLASS_CIRCULARITY_ERROR, $ClassCircularityError::class$);
	$load($ClassFormatError);
	$assignStatic(ExceptionConst::CLASS_FORMAT_ERROR, $ClassFormatError::class$);
	$load($ExceptionInInitializerError);
	$assignStatic(ExceptionConst::EXCEPTION_IN_INITIALIZER_ERROR, $ExceptionInInitializerError::class$);
	$load($IncompatibleClassChangeError);
	$assignStatic(ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR, $IncompatibleClassChangeError::class$);
	$load($AbstractMethodError);
	$assignStatic(ExceptionConst::ABSTRACT_METHOD_ERROR, $AbstractMethodError::class$);
	$load($IllegalAccessError);
	$assignStatic(ExceptionConst::ILLEGAL_ACCESS_ERROR, $IllegalAccessError::class$);
	$load($InstantiationError);
	$assignStatic(ExceptionConst::INSTANTIATION_ERROR, $InstantiationError::class$);
	$load($NoSuchFieldError);
	$assignStatic(ExceptionConst::NO_SUCH_FIELD_ERROR, $NoSuchFieldError::class$);
	$load($NoSuchMethodError);
	$assignStatic(ExceptionConst::NO_SUCH_METHOD_ERROR, $NoSuchMethodError::class$);
	$load($NoClassDefFoundError);
	$assignStatic(ExceptionConst::NO_CLASS_DEF_FOUND_ERROR, $NoClassDefFoundError::class$);
	$load($UnsatisfiedLinkError);
	$assignStatic(ExceptionConst::UNSATISFIED_LINK_ERROR, $UnsatisfiedLinkError::class$);
	$load($VerifyError);
	$assignStatic(ExceptionConst::VERIFY_ERROR, $VerifyError::class$);
	$load($NullPointerException);
	$assignStatic(ExceptionConst::NULL_POINTER_EXCEPTION, $NullPointerException::class$);
	$load($ArrayIndexOutOfBoundsException);
	$assignStatic(ExceptionConst::ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION, $ArrayIndexOutOfBoundsException::class$);
	$load($ArithmeticException);
	$assignStatic(ExceptionConst::ARITHMETIC_EXCEPTION, $ArithmeticException::class$);
	$load($NegativeArraySizeException);
	$assignStatic(ExceptionConst::NEGATIVE_ARRAY_SIZE_EXCEPTION, $NegativeArraySizeException::class$);
	$load($ClassCastException);
	$assignStatic(ExceptionConst::CLASS_CAST_EXCEPTION, $ClassCastException::class$);
	$load($IllegalMonitorStateException);
	$assignStatic(ExceptionConst::ILLEGAL_MONITOR_STATE, $IllegalMonitorStateException::class$);
	$assignStatic(ExceptionConst::EXCS_CLASS_AND_INTERFACE_RESOLUTION, $new($ClassArray, {
		ExceptionConst::NO_CLASS_DEF_FOUND_ERROR,
		ExceptionConst::CLASS_FORMAT_ERROR,
		ExceptionConst::VERIFY_ERROR,
		ExceptionConst::ABSTRACT_METHOD_ERROR,
		ExceptionConst::EXCEPTION_IN_INITIALIZER_ERROR,
		ExceptionConst::ILLEGAL_ACCESS_ERROR
	}));
	$assignStatic(ExceptionConst::EXCS_FIELD_AND_METHOD_RESOLUTION, $new($ClassArray, {
		ExceptionConst::NO_SUCH_FIELD_ERROR,
		ExceptionConst::ILLEGAL_ACCESS_ERROR,
		ExceptionConst::NO_SUCH_METHOD_ERROR
	}));
	$assignStatic(ExceptionConst::EXCS_INTERFACE_METHOD_RESOLUTION, $new($ClassArray, 0));
	$assignStatic(ExceptionConst::EXCS_STRING_RESOLUTION, $new($ClassArray, 0));
	$assignStatic(ExceptionConst::EXCS_ARRAY_EXCEPTION, $new($ClassArray, {
		ExceptionConst::NULL_POINTER_EXCEPTION,
		ExceptionConst::ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION
	}));
}

ExceptionConst::ExceptionConst() {
}

$Class* ExceptionConst::load$($String* name, bool initialize) {
	$loadClass(ExceptionConst, name, initialize, &_ExceptionConst_ClassInfo_, clinit$ExceptionConst, allocate$ExceptionConst);
	return class$;
}

$Class* ExceptionConst::class$ = nullptr;

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com