#ifndef ZBUFFER_DEMO_DEF
#define ZBUFFER_DEMO_DEF

#include <Models/ModelMD2.hpp>
#include "../../Demo.hpp"
using namespace dkr;

class ZbufferDemo : public Demo {
public:
	ZbufferDemo();

	// Initialization and unloading
	virtual void Init(dkr::GraphicsMemory* _memory, dkr::Transformer* _transformer, dkr::IRenderTarget* _renderer);
	virtual void Unload(dkr::GraphicsMemory* _memory, dkr::Transformer* _transformer, dkr::IRenderTarget* _renderer);

	// Update and draw the demo.
	virtual void Update(float time, dkr::GraphicsMemory* _memory, dkr::Transformer* _transformer, dkr::IRenderTarget* _renderer);
	virtual void Draw(HWND hWnd, dkr::GraphicsMemory* _memory, dkr::Transformer* _transformer, dkr::IRenderTarget* _renderer);

	// Get the how long it takes to expire the demo
	virtual float Expires();

private:
	// A cube model
	ModelMD2 cube;
	int cubeId;
	ModelMD2 other;
	int otherId;
	float rotation;
};

#endif