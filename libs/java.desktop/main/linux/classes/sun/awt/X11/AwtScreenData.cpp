#include <sun/awt/X11/AwtScreenData.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/AwtGraphicsConfigData.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AwtGraphicsConfigData = ::sun::awt::X11::AwtGraphicsConfigData;
using $Native = ::sun::awt::X11::Native;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _AwtScreenData_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(AwtScreenData, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(AwtScreenData, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(AwtScreenData, pData)},
	{}
};

$MethodInfo _AwtScreenData_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(AwtScreenData, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AwtScreenData, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AwtScreenData, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(AwtScreenData, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(AwtScreenData, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(AwtScreenData, getSize, int32_t)},
	{"get_blackpixel", "()J", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_blackpixel, int64_t)},
	{"get_configs", "(I)J", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_configs, int64_t, int32_t)},
	{"get_configs", "()J", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_configs, int64_t)},
	{"get_defaultConfig", "(I)Lsun/awt/X11/AwtGraphicsConfigData;", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_defaultConfig, $AwtGraphicsConfigData*, int32_t)},
	{"get_defaultConfig", "()J", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_defaultConfig, int64_t)},
	{"get_numConfigs", "()I", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_numConfigs, int32_t)},
	{"get_root", "()J", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_root, int64_t)},
	{"get_whitepixel", "()J", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, get_whitepixel, int64_t)},
	{"set_blackpixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, set_blackpixel, void, int64_t)},
	{"set_configs", "(J)V", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, set_configs, void, int64_t)},
	{"set_defaultConfig", "(J)V", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, set_defaultConfig, void, int64_t)},
	{"set_numConfigs", "(I)V", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, set_numConfigs, void, int32_t)},
	{"set_root", "(J)V", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, set_root, void, int64_t)},
	{"set_whitepixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(AwtScreenData, set_whitepixel, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AwtScreenData, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AwtScreenData, zero, void)},
	{}
};

$ClassInfo _AwtScreenData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.AwtScreenData",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_AwtScreenData_FieldInfo_,
	_AwtScreenData_MethodInfo_
};

$Object* allocate$AwtScreenData($Class* clazz) {
	return $of($alloc(AwtScreenData));
}

int32_t AwtScreenData::getSize() {
	$init(AwtScreenData);
	return 48;
}

int32_t AwtScreenData::getDataSize() {
	return getSize();
}

int64_t AwtScreenData::getPData() {
	return this->pData;
}

void AwtScreenData::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void AwtScreenData::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void AwtScreenData::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t AwtScreenData::get_numConfigs() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void AwtScreenData::set_numConfigs(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t AwtScreenData::get_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void AwtScreenData::set_root(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t AwtScreenData::get_whitepixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void AwtScreenData::set_whitepixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t AwtScreenData::get_blackpixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void AwtScreenData::set_blackpixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

$AwtGraphicsConfigData* AwtScreenData::get_defaultConfig(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32) != 0) ? ($new($AwtGraphicsConfigData, $Native::getLong(this->pData + 32) + index * 208)) : (($AwtGraphicsConfigData*)nullptr);
}

int64_t AwtScreenData::get_defaultConfig() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 32);
}

void AwtScreenData::set_defaultConfig(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t AwtScreenData::get_configs(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 40);
	return var$0 + index * $Native::getLongSize();
}

int64_t AwtScreenData::get_configs() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 40);
}

void AwtScreenData::set_configs(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

$String* AwtScreenData::getName() {
	return "AwtScreenData"_s;
}

$String* AwtScreenData::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	ret->append("numConfigs = "_s)->append(get_numConfigs())->append(", "_s);
	ret->append("root = "_s)->append(get_root())->append(", "_s);
	ret->append("whitepixel = "_s)->append(get_whitepixel())->append(", "_s);
	ret->append("blackpixel = "_s)->append(get_blackpixel())->append(", "_s);
	ret->append("defaultConfig = "_s)->append(get_defaultConfig())->append(", "_s);
	ret->append("configs = "_s)->append(get_configs())->append(", "_s);
	return ret->toString();
}

$Object* AwtScreenData::clone() {
	return $of($XWrapperBase::clone());
}

void AwtScreenData::zero() {
	$XWrapperBase::zero();
}

$String* AwtScreenData::toString() {
	return $XWrapperBase::toString();
}

AwtScreenData::AwtScreenData() {
}

$Class* AwtScreenData::load$($String* name, bool initialize) {
	$loadClass(AwtScreenData, name, initialize, &_AwtScreenData_ClassInfo_, allocate$AwtScreenData);
	return class$;
}

$Class* AwtScreenData::class$ = nullptr;

		} // X11
	} // awt
} // sun