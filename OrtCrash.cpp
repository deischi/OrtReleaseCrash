#define ORT_API_MANUAL_INIT
#include <onnxruntime_cxx_api.h>

int main()
{
	// Ort::InitApi();
	Ort::Session session { nullptr};			// this crashes in OrtRelease as OrtApi is null
}
