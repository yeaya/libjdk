#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8$Cache.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef CACHE
#undef MAX_ENTRY_SIZE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantUtf8$Cache = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8$Cache;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

void ConstantUtf8::clearCache() {
	$init(ConstantUtf8);
	$synchronized(class$) {
		$init($ConstantUtf8$Cache);
		$nc($ConstantUtf8$Cache::CACHE)->clear();
	}
}

ConstantUtf8* ConstantUtf8::getCachedInstance($String* value) {
	$init(ConstantUtf8);
	if ($nc(value)->length() > $ConstantUtf8$Cache::MAX_ENTRY_SIZE) {
		return $new(ConstantUtf8, value);
	}
	$synchronized(ConstantUtf8::class$) {
		$init($ConstantUtf8$Cache);
		$var(ConstantUtf8, result, $cast(ConstantUtf8, $nc($ConstantUtf8$Cache::CACHE)->get(value)));
		if (result != nullptr) {
			return result;
		}
		$assign(result, $new(ConstantUtf8, value));
		$ConstantUtf8$Cache::CACHE->put(value, result);
		return result;
	}
}

ConstantUtf8* ConstantUtf8::getInstance($DataInput* dataInput) {
	$init(ConstantUtf8);
	return getInstance($($nc(dataInput)->readUTF()));
}

ConstantUtf8* ConstantUtf8::getInstance($String* value) {
	$init(ConstantUtf8);
	return $ConstantUtf8$Cache::isEnabled() ? getCachedInstance(value) : $new(ConstantUtf8, value);
}

void ConstantUtf8::init$(ConstantUtf8* constantUtf8) {
	ConstantUtf8::init$($($nc(constantUtf8)->getBytes()));
}

void ConstantUtf8::init$($DataInput* dataInput) {
	$Constant::init$($Const::CONSTANT_Utf8);
	$set(this, value, $nc(dataInput)->readUTF());
}

void ConstantUtf8::init$($String* value) {
	$Constant::init$($Const::CONSTANT_Utf8);
	if (value == nullptr) {
		$throwNew($IllegalArgumentException, "Value must not be null."_s);
	}
	$set(this, value, value);
}

void ConstantUtf8::accept($Visitor* v) {
	$nc(v)->visitConstantUtf8(this);
}

void ConstantUtf8::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeUTF(this->value);
}

$String* ConstantUtf8::getBytes() {
	return this->value;
}

void ConstantUtf8::setBytes($String* bytes) {
	$throwNew($UnsupportedOperationException);
}

$String* ConstantUtf8::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Constant::toString()));
	var$0->append("(\""_s);
	var$0->append($($Utility::replace(this->value, "\n"_s, "\\n"_s)));
	var$0->append("\")"_s);
	return $str(var$0);
}

ConstantUtf8::ConstantUtf8() {
}

$Class* ConstantUtf8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConstantUtf8, value)},
		{}
	};
	$CompoundAttribute setBytesmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;)V", nullptr, $PUBLIC, $method(ConstantUtf8, init$, void, ConstantUtf8*)},
		{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantUtf8, init$, void, $DataInput*), "java.io.IOException"},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConstantUtf8, init$, void, $String*)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantUtf8, accept, void, $Visitor*)},
		{"clearCache", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(ConstantUtf8, clearCache, void)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantUtf8, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"getBytes", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ConstantUtf8, getBytes, $String*)},
		{"getCachedInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;", nullptr, $PUBLIC | $STATIC, $staticMethod(ConstantUtf8, getCachedInstance, ConstantUtf8*, $String*)},
		{"getInstance", "(Ljava/io/DataInput;)Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;", nullptr, $PUBLIC | $STATIC, $staticMethod(ConstantUtf8, getInstance, ConstantUtf8*, $DataInput*), "java.io.IOException"},
		{"getInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;", nullptr, $PUBLIC | $STATIC, $staticMethod(ConstantUtf8, getInstance, ConstantUtf8*, $String*)},
		{"setBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(ConstantUtf8, setBytes, void, $String*), nullptr, nullptr, setBytesmethodAnnotations$$},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantUtf8, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache", "com.sun.org.apache.bcel.internal.classfile.ConstantUtf8", "Cache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8",
		"com.sun.org.apache.bcel.internal.classfile.Constant",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache,com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache$1"
	};
	$loadClass(ConstantUtf8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConstantUtf8));
	});
	return class$;
}

$Class* ConstantUtf8::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com