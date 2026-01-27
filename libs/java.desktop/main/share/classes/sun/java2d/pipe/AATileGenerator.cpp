#include <sun/java2d/pipe/AATileGenerator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _AATileGenerator_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AATileGenerator, dispose, void)},
	{"getAlpha", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AATileGenerator, getAlpha, void, $bytes*, int32_t, int32_t)},
	{"getTileHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AATileGenerator, getTileHeight, int32_t)},
	{"getTileWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AATileGenerator, getTileWidth, int32_t)},
	{"getTypicalAlpha", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AATileGenerator, getTypicalAlpha, int32_t)},
	{"nextTile", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AATileGenerator, nextTile, void)},
	{}
};

$ClassInfo _AATileGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.AATileGenerator",
	nullptr,
	nullptr,
	nullptr,
	_AATileGenerator_MethodInfo_
};

$Object* allocate$AATileGenerator($Class* clazz) {
	return $of($alloc(AATileGenerator));
}

$Class* AATileGenerator::load$($String* name, bool initialize) {
	$loadClass(AATileGenerator, name, initialize, &_AATileGenerator_ClassInfo_, allocate$AATileGenerator);
	return class$;
}

$Class* AATileGenerator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun