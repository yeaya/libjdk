#include <com/sun/tools/javac/jvm/ClassReader$ProxyType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/Name$NameMapper.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef EMPTY
#undef NONE

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$NameMapper = ::com::sun::tools::javac::util::Name$NameMapper;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$ProxyType$$Lambda$sigToType : public $Name$NameMapper {
	$class(ClassReader$ProxyType$$Lambda$sigToType, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$($ClassReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* map($bytes* sig, int32_t offset, int32_t len) override {
		 return $of($nc(inst$)->sigToType(sig, offset, len));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$ProxyType$$Lambda$sigToType>());
	}
	$ClassReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$ProxyType$$Lambda$sigToType::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$ProxyType$$Lambda$sigToType, inst$)},
	{}
};
$MethodInfo ClassReader$ProxyType$$Lambda$sigToType::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;)V", nullptr, $PUBLIC, $method(ClassReader$ProxyType$$Lambda$sigToType, init$, void, $ClassReader*)},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ClassReader$ProxyType$$Lambda$sigToType, map, $Object*, $bytes*, int32_t, int32_t)},
	{}
};
$ClassInfo ClassReader$ProxyType$$Lambda$sigToType::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$ProxyType$$Lambda$sigToType",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$ProxyType$$Lambda$sigToType::load$($String* name, bool initialize) {
	$loadClass(ClassReader$ProxyType$$Lambda$sigToType, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$ProxyType$$Lambda$sigToType::class$ = nullptr;

$FieldInfo _ClassReader$ProxyType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$ProxyType, this$0)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(ClassReader$ProxyType, name)},
	{}
};

$MethodInfo _ClassReader$ProxyType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;I)V", nullptr, $PUBLIC, $method(ClassReader$ProxyType, init$, void, $ClassReader*, int32_t)},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(ClassReader$ProxyType, cloneWithMetadata, $Type*, $TypeMetadata*)},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC, $virtualMethod(ClassReader$ProxyType, getTag, $TypeTag*)},
	{"resolve", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(ClassReader$ProxyType, resolve, $Type*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassReader$ProxyType, toString, $String*)},
	{}
};

$InnerClassInfo _ClassReader$ProxyType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$ProxyType", "com.sun.tools.javac.jvm.ClassReader", "ProxyType", $PRIVATE},
	{}
};

$ClassInfo _ClassReader$ProxyType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$ProxyType",
	"com.sun.tools.javac.code.Type",
	nullptr,
	_ClassReader$ProxyType_FieldInfo_,
	_ClassReader$ProxyType_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$ProxyType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$ProxyType($Class* clazz) {
	return $of($alloc(ClassReader$ProxyType));
}

void ClassReader$ProxyType::init$($ClassReader* this$0, int32_t index) {
	$set(this, this$0, this$0);
	$init($TypeMetadata);
	$Type::init$($nc(this$0->syms)->noSymbol, $TypeMetadata::EMPTY);
	$set(this, name, $nc(this$0->poolReader)->getName(index));
}

$TypeTag* ClassReader$ProxyType::getTag() {
	$init($TypeTag);
	return $TypeTag::NONE;
}

$Type* ClassReader$ProxyType::cloneWithMetadata($TypeMetadata* metadata) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Type* ClassReader$ProxyType::resolve() {
	return $cast($Type, $nc(this->name)->map(static_cast<$Name$NameMapper*>($$new(ClassReader$ProxyType$$Lambda$sigToType, this->this$0))));
}

$String* ClassReader$ProxyType::toString() {
	return "<ProxyType>"_s;
}

ClassReader$ProxyType::ClassReader$ProxyType() {
}

$Class* ClassReader$ProxyType::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassReader$ProxyType$$Lambda$sigToType::classInfo$.name)) {
			return ClassReader$ProxyType$$Lambda$sigToType::load$(name, initialize);
		}
	}
	$loadClass(ClassReader$ProxyType, name, initialize, &_ClassReader$ProxyType_ClassInfo_, allocate$ClassReader$ProxyType);
	return class$;
}

$Class* ClassReader$ProxyType::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com