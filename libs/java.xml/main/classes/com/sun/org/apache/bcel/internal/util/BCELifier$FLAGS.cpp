#include <com/sun/org/apache/bcel/internal/util/BCELifier$FLAGS.h>

#include <com/sun/org/apache/bcel/internal/util/BCELifier.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef METHOD
#undef UNKNOWN

using $BCELifier$FLAGSArray = $Array<::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _BCELifier$FLAGS_FieldInfo_[] = {
	{"UNKNOWN", "Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BCELifier$FLAGS, UNKNOWN)},
	{"CLASS", "Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BCELifier$FLAGS, CLASS)},
	{"METHOD", "Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BCELifier$FLAGS, METHOD)},
	{"$VALUES", "[Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(BCELifier$FLAGS, $VALUES)},
	{}
};

$MethodInfo _BCELifier$FLAGS_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BCELifier$FLAGS, $values, $BCELifier$FLAGSArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(BCELifier$FLAGS, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;", nullptr, $PUBLIC | $STATIC, $staticMethod(BCELifier$FLAGS, valueOf, BCELifier$FLAGS*, $String*)},
	{"values", "()[Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;", nullptr, $PUBLIC | $STATIC, $staticMethod(BCELifier$FLAGS, values, $BCELifier$FLAGSArray*)},
	{}
};

$InnerClassInfo _BCELifier$FLAGS_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.util.BCELifier$FLAGS", "com.sun.org.apache.bcel.internal.util.BCELifier", "FLAGS", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _BCELifier$FLAGS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.bcel.internal.util.BCELifier$FLAGS",
	"java.lang.Enum",
	nullptr,
	_BCELifier$FLAGS_FieldInfo_,
	_BCELifier$FLAGS_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;>;",
	nullptr,
	_BCELifier$FLAGS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.util.BCELifier"
};

$Object* allocate$BCELifier$FLAGS($Class* clazz) {
	return $of($alloc(BCELifier$FLAGS));
}

BCELifier$FLAGS* BCELifier$FLAGS::UNKNOWN = nullptr;
BCELifier$FLAGS* BCELifier$FLAGS::CLASS = nullptr;
BCELifier$FLAGS* BCELifier$FLAGS::METHOD = nullptr;
$BCELifier$FLAGSArray* BCELifier$FLAGS::$VALUES = nullptr;

$BCELifier$FLAGSArray* BCELifier$FLAGS::$values() {
	$init(BCELifier$FLAGS);
	return $new($BCELifier$FLAGSArray, {
		BCELifier$FLAGS::UNKNOWN,
		BCELifier$FLAGS::CLASS,
		BCELifier$FLAGS::METHOD
	});
}

$BCELifier$FLAGSArray* BCELifier$FLAGS::values() {
	$init(BCELifier$FLAGS);
	return $cast($BCELifier$FLAGSArray, BCELifier$FLAGS::$VALUES->clone());
}

BCELifier$FLAGS* BCELifier$FLAGS::valueOf($String* name) {
	$init(BCELifier$FLAGS);
	return $cast(BCELifier$FLAGS, $Enum::valueOf(BCELifier$FLAGS::class$, name));
}

void BCELifier$FLAGS::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$BCELifier$FLAGS($Class* class$) {
	$assignStatic(BCELifier$FLAGS::UNKNOWN, $new(BCELifier$FLAGS, "UNKNOWN"_s, 0));
	$assignStatic(BCELifier$FLAGS::CLASS, $new(BCELifier$FLAGS, "CLASS"_s, 1));
	$assignStatic(BCELifier$FLAGS::METHOD, $new(BCELifier$FLAGS, "METHOD"_s, 2));
	$assignStatic(BCELifier$FLAGS::$VALUES, BCELifier$FLAGS::$values());
}

BCELifier$FLAGS::BCELifier$FLAGS() {
}

$Class* BCELifier$FLAGS::load$($String* name, bool initialize) {
	$loadClass(BCELifier$FLAGS, name, initialize, &_BCELifier$FLAGS_ClassInfo_, clinit$BCELifier$FLAGS, allocate$BCELifier$FLAGS);
	return class$;
}

$Class* BCELifier$FLAGS::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com