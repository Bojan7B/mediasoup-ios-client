#ifndef MSC_SDP_UTILS_HPP
#define MSC_SDP_UTILS_HPP

#include "json.hpp"
#include "sdptransform.hpp"
#include "webrtc/api/mediastreaminterface.h"

namespace Sdp
{
	namespace Utils
	{
		json extractDtlsParameters(const json& sdpObj);
		void fillRtpParametersForTrack(json& rtpParameters, const json& sdpObj, const std::string& mid);
		void addLegacySimulcast(
		  json& sdpObj, const webrtc::MediaStreamTrackInterface* track, uint8_t numStreams);
	} // namespace Utils
} // namespace Sdp

#endif