import asyncio

from winrt.windows.media.control import \
    GlobalSystemMediaTransportControlsSessionManager as MediaManager
from winrt.windows.storage.streams import \
    DataReader, Buffer, InputStreamOptions

async def get_media_info():
    sessions = await MediaManager.request_async()
    current_session = sessions.get_current_session()
    if current_session:  
            info = await current_session.try_get_media_properties_async()
            title = info.title
            artist = info.artist
            album = info.album_title
            print(title, artist, album)

async def read_stream_into_buffer(stream_ref, buffer):
    readable_stream = await stream_ref.open_read_async()
    readable_stream.read_async(buffer, buffer.capacity, InputStreamOptions.READ_AHEAD)

if __name__ == '__main__':
    asyncio.run(get_media_info())
ModuleNotFoundError("No module named 'winrt.windows.storage.streams'")

AttributeError("module 'winrt.windows.media' has no attribute 'MediaPlaybackType'")
