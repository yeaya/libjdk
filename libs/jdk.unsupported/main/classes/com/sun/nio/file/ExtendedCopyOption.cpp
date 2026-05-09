#include <com/sun/nio/file/ExtendedCopyOption.h>
#include <java/lang/Enum.h>
#include <jdk/internal/misc/FileSystemOption.h>
#include <jcpp.h>

#undef INTERRUPTIBLE

using $ExtendedCopyOptionArray = $Array<::com::sun::nio::file::ExtendedCopyOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemOption = ::jdk::internal::misc::FileSystemOption;

namespace com {
	namespace sun {
		namespace nio {
			namespace file {

$String* ExtendedCopyOption::toString() {
	return this->$Enum::toString();
}

bool ExtendedCopyOption::equals(Object$* arg0) {
	return this->$Enum::equals(arg0);
}

int32_t ExtendedCopyOption::hashCode() {
	return this->$Enum::hashCode();
}

$Object* ExtendedCopyOption::clone() {
	return this->$Enum::clone();
}

void ExtendedCopyOption::finalize() {
	this->$Enum::finalize();
}

ExtendedCopyOption* ExtendedCopyOption::INTERRUPTIBLE = nullptr;
$ExtendedCopyOptionArray* ExtendedCopyOption::$VALUES = nullptr;

$ExtendedCopyOptionArray* ExtendedCopyOption::$values() {
	$init(ExtendedCopyOption);
	return $new($ExtendedCopyOptionArray, {ExtendedCopyOption::INTERRUPTIBLE});
}

$ExtendedCopyOptionArray* ExtendedCopyOption::values() {
	$init(ExtendedCopyOption);
	return $cast($ExtendedCopyOptionArray, ExtendedCopyOption::$VALUES->clone());
}

ExtendedCopyOption* ExtendedCopyOption::valueOf($String* name) {
	$init(ExtendedCopyOption);
	return $cast(ExtendedCopyOption, $Enum::valueOf(ExtendedCopyOption::class$, name));
}

void ExtendedCopyOption::init$($String* $enum$name, int32_t $enum$ordinal, $FileSystemOption* option) {
	$Enum::init$($enum$name, $enum$ordinal);
	$nc(option)->register$(this);
}

void ExtendedCopyOption::clinit$($Class* clazz) {
	$init($FileSystemOption);
	$assignStatic(ExtendedCopyOption::INTERRUPTIBLE, $new(ExtendedCopyOption, "INTERRUPTIBLE"_s, 0, $FileSystemOption::INTERRUPTIBLE));
	$assignStatic(ExtendedCopyOption::$VALUES, ExtendedCopyOption::$values());
}

ExtendedCopyOption::ExtendedCopyOption() {
}

$Class* ExtendedCopyOption::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INTERRUPTIBLE", "Lcom/sun/nio/file/ExtendedCopyOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedCopyOption, INTERRUPTIBLE)},
		{"$VALUES", "[Lcom/sun/nio/file/ExtendedCopyOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ExtendedCopyOption, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/nio/file/ExtendedCopyOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ExtendedCopyOption, $values, $ExtendedCopyOptionArray*)},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
		{"<init>", "(Ljava/lang/String;ILjdk/internal/misc/FileSystemOption;)V", "(Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;)V", $PRIVATE, $method(ExtendedCopyOption, init$, void, $String*, int32_t, $FileSystemOption*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/nio/file/ExtendedCopyOption;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExtendedCopyOption, valueOf, ExtendedCopyOption*, $String*)},
		{"values", "()[Lcom/sun/nio/file/ExtendedCopyOption;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExtendedCopyOption, values, $ExtendedCopyOptionArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.nio.file.ExtendedCopyOption",
		"java.lang.Enum",
		"java.nio.file.CopyOption",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/nio/file/ExtendedCopyOption;>;Ljava/nio/file/CopyOption;"
	};
	$loadClass(ExtendedCopyOption, name, initialize, &classInfo$$, ExtendedCopyOption::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ExtendedCopyOption));
	});
	return class$;
}

$Class* ExtendedCopyOption::class$ = nullptr;

			} // file
		} // nio
	} // sun
} // com