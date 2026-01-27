#include <java/awt/image/renderable/ParameterBlock.h>

#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/lang/Cloneable.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef TYPE

using $RenderedImage = ::java::awt::image::RenderedImage;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$FieldInfo _ParameterBlock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParameterBlock, serialVersionUID)},
	{"sources", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PROTECTED, $field(ParameterBlock, sources)},
	{"parameters", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PROTECTED, $field(ParameterBlock, parameters)},
	{}
};

$MethodInfo _ParameterBlock_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParameterBlock, init$, void)},
	{"<init>", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC, $method(ParameterBlock, init$, void, $Vector*)},
	{"<init>", "(Ljava/util/Vector;Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC, $method(ParameterBlock, init$, void, $Vector*, $Vector*)},
	{"add", "(Ljava/lang/Object;)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, Object$*)},
	{"add", "(B)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, int8_t)},
	{"add", "(C)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, char16_t)},
	{"add", "(S)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, int16_t)},
	{"add", "(I)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, int32_t)},
	{"add", "(J)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, int64_t)},
	{"add", "(F)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, float)},
	{"add", "(D)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, add, ParameterBlock*, double)},
	{"addSource", "(Ljava/lang/Object;)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, addSource, ParameterBlock*, Object$*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, clone, $Object*)},
	{"getByteParameter", "(I)B", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getByteParameter, int8_t, int32_t)},
	{"getCharParameter", "(I)C", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getCharParameter, char16_t, int32_t)},
	{"getDoubleParameter", "(I)D", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getDoubleParameter, double, int32_t)},
	{"getFloatParameter", "(I)F", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getFloatParameter, float, int32_t)},
	{"getIntParameter", "(I)I", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getIntParameter, int32_t, int32_t)},
	{"getLongParameter", "(I)J", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getLongParameter, int64_t, int32_t)},
	{"getNumParameters", "()I", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getNumParameters, int32_t)},
	{"getNumSources", "()I", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getNumSources, int32_t)},
	{"getObjectParameter", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getObjectParameter, $Object*, int32_t)},
	{"getParamClasses", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ParameterBlock, getParamClasses, $ClassArray*)},
	{"getParameters", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(ParameterBlock, getParameters, $Vector*)},
	{"getRenderableSource", "(I)Ljava/awt/image/renderable/RenderableImage;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getRenderableSource, $RenderableImage*, int32_t)},
	{"getRenderedSource", "(I)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getRenderedSource, $RenderedImage*, int32_t)},
	{"getShortParameter", "(I)S", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getShortParameter, int16_t, int32_t)},
	{"getSource", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, getSource, $Object*, int32_t)},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(ParameterBlock, getSources, $Vector*)},
	{"removeParameters", "()V", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, removeParameters, void)},
	{"removeSources", "()V", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, removeSources, void)},
	{"set", "(Ljava/lang/Object;I)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, Object$*, int32_t)},
	{"set", "(BI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, int8_t, int32_t)},
	{"set", "(CI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, char16_t, int32_t)},
	{"set", "(SI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, int16_t, int32_t)},
	{"set", "(II)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, int32_t, int32_t)},
	{"set", "(JI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, int64_t, int32_t)},
	{"set", "(FI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, float, int32_t)},
	{"set", "(DI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, set, ParameterBlock*, double, int32_t)},
	{"setParameters", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC, $virtualMethod(ParameterBlock, setParameters, void, $Vector*)},
	{"setSource", "(Ljava/lang/Object;I)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, setSource, ParameterBlock*, Object$*, int32_t)},
	{"setSources", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC, $virtualMethod(ParameterBlock, setSources, void, $Vector*)},
	{"shallowClone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ParameterBlock, shallowClone, $Object*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ParameterBlock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.renderable.ParameterBlock",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	_ParameterBlock_FieldInfo_,
	_ParameterBlock_MethodInfo_
};

$Object* allocate$ParameterBlock($Class* clazz) {
	return $of($alloc(ParameterBlock));
}

int32_t ParameterBlock::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool ParameterBlock::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$String* ParameterBlock::toString() {
	 return this->$Cloneable::toString();
}

void ParameterBlock::finalize() {
	this->$Cloneable::finalize();
}

void ParameterBlock::init$() {
	$set(this, sources, $new($Vector));
	$set(this, parameters, $new($Vector));
}

void ParameterBlock::init$($Vector* sources) {
	$set(this, sources, $new($Vector));
	$set(this, parameters, $new($Vector));
	setSources(sources);
}

void ParameterBlock::init$($Vector* sources, $Vector* parameters) {
	$set(this, sources, $new($Vector));
	$set(this, parameters, $new($Vector));
	setSources(sources);
	setParameters(parameters);
}

$Object* ParameterBlock::shallowClone() {
	try {
		return $of($Cloneable::clone());
	} catch ($Exception& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$Object* ParameterBlock::clone() {
	$useLocalCurrentObjectStackCache();
	$var(ParameterBlock, theClone, nullptr);
	try {
		$assign(theClone, $cast(ParameterBlock, $Cloneable::clone()));
	} catch ($Exception& e) {
		return $of(nullptr);
	}
	if (this->sources != nullptr) {
		$nc(theClone)->setSources($cast($Vector, $($nc(this->sources)->clone())));
	}
	if (this->parameters != nullptr) {
		$nc(theClone)->setParameters($cast($Vector, $($nc(this->parameters)->clone())));
	}
	return $of($of(theClone));
}

ParameterBlock* ParameterBlock::addSource(Object$* source) {
	$nc(this->sources)->addElement(source);
	return this;
}

$Object* ParameterBlock::getSource(int32_t index) {
	return $of($nc(this->sources)->elementAt(index));
}

ParameterBlock* ParameterBlock::setSource(Object$* source, int32_t index) {
	int32_t oldSize = $nc(this->sources)->size();
	int32_t newSize = index + 1;
	if (oldSize < newSize) {
		$nc(this->sources)->setSize(newSize);
	}
	$nc(this->sources)->setElementAt(source, index);
	return this;
}

$RenderedImage* ParameterBlock::getRenderedSource(int32_t index) {
	return $cast($RenderedImage, $nc(this->sources)->elementAt(index));
}

$RenderableImage* ParameterBlock::getRenderableSource(int32_t index) {
	return $cast($RenderableImage, $nc(this->sources)->elementAt(index));
}

int32_t ParameterBlock::getNumSources() {
	return $nc(this->sources)->size();
}

$Vector* ParameterBlock::getSources() {
	return this->sources;
}

void ParameterBlock::setSources($Vector* sources) {
	$set(this, sources, sources);
}

void ParameterBlock::removeSources() {
	$set(this, sources, $new($Vector));
}

int32_t ParameterBlock::getNumParameters() {
	return $nc(this->parameters)->size();
}

$Vector* ParameterBlock::getParameters() {
	return this->parameters;
}

void ParameterBlock::setParameters($Vector* parameters) {
	$set(this, parameters, parameters);
}

void ParameterBlock::removeParameters() {
	$set(this, parameters, $new($Vector));
}

ParameterBlock* ParameterBlock::add(Object$* obj) {
	$nc(this->parameters)->addElement(obj);
	return this;
}

ParameterBlock* ParameterBlock::add(int8_t b) {
	return add($($of($Byte::valueOf(b))));
}

ParameterBlock* ParameterBlock::add(char16_t c) {
	return add($($of($Character::valueOf(c))));
}

ParameterBlock* ParameterBlock::add(int16_t s) {
	return add($($of($Short::valueOf(s))));
}

ParameterBlock* ParameterBlock::add(int32_t i) {
	return add($($of($Integer::valueOf(i))));
}

ParameterBlock* ParameterBlock::add(int64_t l) {
	return add($($of($Long::valueOf(l))));
}

ParameterBlock* ParameterBlock::add(float f) {
	return add($($of($Float::valueOf(f))));
}

ParameterBlock* ParameterBlock::add(double d) {
	return add($($of($Double::valueOf(d))));
}

ParameterBlock* ParameterBlock::set(Object$* obj, int32_t index) {
	int32_t oldSize = $nc(this->parameters)->size();
	int32_t newSize = index + 1;
	if (oldSize < newSize) {
		$nc(this->parameters)->setSize(newSize);
	}
	$nc(this->parameters)->setElementAt(obj, index);
	return this;
}

ParameterBlock* ParameterBlock::set(int8_t b, int32_t index) {
	return set($($of($Byte::valueOf(b))), index);
}

ParameterBlock* ParameterBlock::set(char16_t c, int32_t index) {
	return set($($of($Character::valueOf(c))), index);
}

ParameterBlock* ParameterBlock::set(int16_t s, int32_t index) {
	return set($($of($Short::valueOf(s))), index);
}

ParameterBlock* ParameterBlock::set(int32_t i, int32_t index) {
	return set($($of($Integer::valueOf(i))), index);
}

ParameterBlock* ParameterBlock::set(int64_t l, int32_t index) {
	return set($($of($Long::valueOf(l))), index);
}

ParameterBlock* ParameterBlock::set(float f, int32_t index) {
	return set($($of($Float::valueOf(f))), index);
}

ParameterBlock* ParameterBlock::set(double d, int32_t index) {
	return set($($of($Double::valueOf(d))), index);
}

$Object* ParameterBlock::getObjectParameter(int32_t index) {
	return $of($nc(this->parameters)->elementAt(index));
}

int8_t ParameterBlock::getByteParameter(int32_t index) {
	return $nc(($cast($Byte, $($nc(this->parameters)->elementAt(index)))))->byteValue();
}

char16_t ParameterBlock::getCharParameter(int32_t index) {
	return $nc(($cast($Character, $($nc(this->parameters)->elementAt(index)))))->charValue();
}

int16_t ParameterBlock::getShortParameter(int32_t index) {
	return $nc(($cast($Short, $($nc(this->parameters)->elementAt(index)))))->shortValue();
}

int32_t ParameterBlock::getIntParameter(int32_t index) {
	return $nc(($cast($Integer, $($nc(this->parameters)->elementAt(index)))))->intValue();
}

int64_t ParameterBlock::getLongParameter(int32_t index) {
	return $nc(($cast($Long, $($nc(this->parameters)->elementAt(index)))))->longValue();
}

float ParameterBlock::getFloatParameter(int32_t index) {
	return $nc(($cast($Float, $($nc(this->parameters)->elementAt(index)))))->floatValue();
}

double ParameterBlock::getDoubleParameter(int32_t index) {
	return $nc(($cast($Double, $($nc(this->parameters)->elementAt(index)))))->doubleValue();
}

$ClassArray* ParameterBlock::getParamClasses() {
	$useLocalCurrentObjectStackCache();
	int32_t numParams = getNumParameters();
	$var($ClassArray, classes, $new($ClassArray, numParams));
	int32_t i = 0;
	for (i = 0; i < numParams; ++i) {
		$var($Object, obj, getObjectParameter(i));
		if ($instanceOf($Byte, obj)) {
			$init($Byte);
			classes->set(i, $Byte::TYPE);
		} else if ($instanceOf($Character, obj)) {
			$init($Character);
			classes->set(i, $Character::TYPE);
		} else if ($instanceOf($Short, obj)) {
			$init($Short);
			classes->set(i, $Short::TYPE);
		} else if ($instanceOf($Integer, obj)) {
			$init($Integer);
			classes->set(i, $Integer::TYPE);
		} else if ($instanceOf($Long, obj)) {
			$init($Long);
			classes->set(i, $Long::TYPE);
		} else if ($instanceOf($Float, obj)) {
			$init($Float);
			classes->set(i, $Float::TYPE);
		} else if ($instanceOf($Double, obj)) {
			$init($Double);
			classes->set(i, $Double::TYPE);
		} else {
			classes->set(i, $nc($of(obj))->getClass());
		}
	}
	return classes;
}

ParameterBlock::ParameterBlock() {
}

$Class* ParameterBlock::load$($String* name, bool initialize) {
	$loadClass(ParameterBlock, name, initialize, &_ParameterBlock_ClassInfo_, allocate$ParameterBlock);
	return class$;
}

$Class* ParameterBlock::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java