#include <sun/java2d/cmm/CMSManager$CMMTracer.h>
#include <java/awt/color/ICC_Profile.h>
#include <sun/java2d/cmm/CMSManager.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/Profile.h>
#include <jcpp.h>

using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $Profile = ::sun::java2d::cmm::Profile;

namespace sun {
	namespace java2d {
		namespace cmm {

void CMSManager$CMMTracer::init$($PCMM* tcmm) {
	$set(this, tcmm, tcmm);
	$set(this, cName, $nc($of(tcmm))->getClass()->getName());
}

$Profile* CMSManager$CMMTracer::loadProfile($bytes* data) {
	$useLocalObjectStack();
	$nc($System::err)->print($$str({this->cName, ".loadProfile"_s}));
	$var($Profile, p, $nc(this->tcmm)->loadProfile(data));
	$System::err->printf("(ID=%s)\n"_s, $$new($ObjectArray, {$($nc(p)->toString())}));
	return p;
}

$bytes* CMSManager$CMMTracer::getProfileData($Profile* p) {
	$useLocalObjectStack();
	$nc($System::err)->print($$str({this->cName, ".getProfileData(ID="_s, p, ") "_s}));
	$var($bytes, data, $nc(this->tcmm)->getProfileData(p));
	$System::err->println($$str({"requested "_s, $$str($nc(data)->length), " byte(s)"_s}));
	return data;
}

$bytes* CMSManager$CMMTracer::getTagData($Profile* p, int32_t tagSignature) {
	$useLocalObjectStack();
	$nc($System::err)->printf($$str({this->cName, ".getTagData(ID=%x, TagSig=%s)"_s}), $$new($ObjectArray, {
		p,
		$(signatureToString(tagSignature))
	}));
	$var($bytes, data, $nc(this->tcmm)->getTagData(p, tagSignature));
	$System::err->println($$str({" requested "_s, $$str($nc(data)->length), " byte(s)"_s}));
	return data;
}

void CMSManager$CMMTracer::setTagData($Profile* p, int32_t tagSignature, $bytes* data) {
	$useLocalObjectStack();
	$nc($System::err)->print($$str({this->cName, ".setTagData(ID="_s, p, ", TagSig="_s, $$str(tagSignature), ")"_s}));
	$System::err->println($$str({" sending "_s, $$str($nc(data)->length), " byte(s)"_s}));
	$nc(this->tcmm)->setTagData(p, tagSignature, data);
}

$ColorTransform* CMSManager$CMMTracer::createTransform($ICC_Profile* profile, int32_t renderType, int32_t transformType) {
	$nc($System::err)->println($$str({this->cName, ".createTransform(ICC_Profile,int,int)"_s}));
	return $nc(this->tcmm)->createTransform(profile, renderType, transformType);
}

$ColorTransform* CMSManager$CMMTracer::createTransform($ColorTransformArray* transforms) {
	$nc($System::err)->println($$str({this->cName, ".createTransform(ColorTransform[])"_s}));
	return $nc(this->tcmm)->createTransform(transforms);
}

$String* CMSManager$CMMTracer::signatureToString(int32_t sig) {
	$init(CMSManager$CMMTracer);
	$useLocalObjectStack();
	return $String::format("%c%c%c%c"_s, $$new($ObjectArray, {
		$($Character::valueOf((char16_t)(0xff & (sig >> 24)))),
		$($Character::valueOf((char16_t)(0xff & (sig >> 16)))),
		$($Character::valueOf((char16_t)(0xff & (sig >> 8)))),
		$($Character::valueOf((char16_t)(0xff & (sig))))
	}));
}

CMSManager$CMMTracer::CMSManager$CMMTracer() {
}

$Class* CMSManager$CMMTracer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tcmm", "Lsun/java2d/cmm/PCMM;", nullptr, 0, $field(CMSManager$CMMTracer, tcmm)},
		{"cName", "Ljava/lang/String;", nullptr, 0, $field(CMSManager$CMMTracer, cName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/cmm/PCMM;)V", nullptr, $PUBLIC, $method(CMSManager$CMMTracer, init$, void, $PCMM*)},
		{"createTransform", "(Ljava/awt/color/ICC_Profile;II)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC, $virtualMethod(CMSManager$CMMTracer, createTransform, $ColorTransform*, $ICC_Profile*, int32_t, int32_t)},
		{"createTransform", "([Lsun/java2d/cmm/ColorTransform;)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC, $virtualMethod(CMSManager$CMMTracer, createTransform, $ColorTransform*, $ColorTransformArray*)},
		{"getProfileData", "(Lsun/java2d/cmm/Profile;)[B", nullptr, $PUBLIC, $virtualMethod(CMSManager$CMMTracer, getProfileData, $bytes*, $Profile*)},
		{"getTagData", "(Lsun/java2d/cmm/Profile;I)[B", nullptr, $PUBLIC, $virtualMethod(CMSManager$CMMTracer, getTagData, $bytes*, $Profile*, int32_t)},
		{"loadProfile", "([B)Lsun/java2d/cmm/Profile;", nullptr, $PUBLIC, $virtualMethod(CMSManager$CMMTracer, loadProfile, $Profile*, $bytes*)},
		{"setTagData", "(Lsun/java2d/cmm/Profile;I[B)V", nullptr, $PUBLIC, $virtualMethod(CMSManager$CMMTracer, setTagData, void, $Profile*, int32_t, $bytes*)},
		{"signatureToString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(CMSManager$CMMTracer, signatureToString, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.cmm.CMSManager$CMMTracer", "sun.java2d.cmm.CMSManager", "CMMTracer", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.cmm.CMSManager$CMMTracer",
		"java.lang.Object",
		"sun.java2d.cmm.PCMM",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.cmm.CMSManager"
	};
	$loadClass(CMSManager$CMMTracer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMSManager$CMMTracer);
	});
	return class$;
}

$Class* CMSManager$CMMTracer::class$ = nullptr;

		} // cmm
	} // java2d
} // sun