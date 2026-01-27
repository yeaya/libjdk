#ifndef _sun_java2d_pipe_SpanShapeRenderer_h_
#define _sun_java2d_pipe_SpanShapeRenderer_h_
//$ class sun.java2d.pipe.SpanShapeRenderer
//$ extends sun.java2d.pipe.ShapeDrawPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

#pragma push_macro("NON_RECTILINEAR_TRANSFORM_MASK")
#undef NON_RECTILINEAR_TRANSFORM_MASK

namespace java {
	namespace awt {
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
			class ShapeSpanIterator;
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class SpanShapeRenderer : public ::sun::java2d::pipe::ShapeDrawPipe {
	$class(SpanShapeRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::ShapeDrawPipe)
public:
	SpanShapeRenderer();
	void init$();
	virtual void draw(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) override;
	virtual void endSequence(Object$* ctx) {}
	virtual void fill(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) override;
	virtual void renderBox(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) {}
	virtual void renderRect(::sun::java2d::SunGraphics2D* sg, ::java::awt::geom::Rectangle2D* r);
	virtual void renderSpans(::sun::java2d::SunGraphics2D* sg, ::sun::java2d::pipe::Region* clipRegion, ::java::awt::Shape* s, ::sun::java2d::pipe::ShapeSpanIterator* sr);
	virtual void spanClipLoop(Object$* ctx, ::sun::java2d::pipe::SpanIterator* sr, ::sun::java2d::pipe::Region* r, $ints* abox);
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* devR, $ints* bbox) {return nullptr;}
	static const int32_t NON_RECTILINEAR_TRANSFORM_MASK = 48; // (AffineTransform.TYPE_GENERAL_TRANSFORM | AffineTransform.TYPE_GENERAL_ROTATION)
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("NON_RECTILINEAR_TRANSFORM_MASK")

#endif // _sun_java2d_pipe_SpanShapeRenderer_h_